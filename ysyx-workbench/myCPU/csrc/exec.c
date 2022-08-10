#include <exec.h>
#include <state.h>
#include <sim.h>
#include <vmem.h>
#include <log.h>
#include <watchpoint.h>
#include <reg.h>
#include <elftl.h>
#include <difftest.h>
#include <gpu.h>
#include <timer.h>

#define SEXT(x, len) ({ struct { int64_t n : len; } __x = { .n = x }; (uint64_t)__x.n; })
//#include <disasm.h>
static bool g_print_step;
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);		 
char log_buf[128];
static uint64_t old_pc = 0x80000000;
static int first = 1;

extern void halt();

static void exec_once()
{
	//old_pc = top->io_pc_addr;
	//top->io_instr = vaddr_ifetch((unsigned int)top->io_pc_addr, 4);
	//top->eval();
	//printf("pc: %lx\n", old_pc);

	step_and_dump_wave();
	uint32_t instr = top->io_inst;

/*
	sprintf(log_buf, "%016lx:    ", top->io_pc_debug);
	//uint32_t instr = paddr_read(old_pc, 4);

	int i;
	for(i = 0; i < 4; i++)
		sprintf(log_buf + 21 + 3*i, "%02x ",*((uint8_t*) (&(instr)) + 3 - i));

	sprintf(log_buf + 33, "   ");
	disassemble(log_buf + 36, 70, old_pc , (uint8_t *)(&(instr)) , 4);
	
	//if(g_print_step){
	printf("%s\n", log_buf);
	//}

	log_write("%s\n", log_buf);
	// p is the ouput array, the next is the remaining length of the array, the third*/
	cpu.pc = top->io_pc_debug;

	if(instr == 0x00100073)
		halt();

	//printf("\n\n\n\npc:%lx\n\n\n", cpu.pc);
	/*
	if(instr != 0x13)
	{
		bool is_store = ((instr&0x7f) == 0x23);
		is_store = false;
		uint64_t imm = ((instr & 0xfe000000) >> 20) + ((instr & 0xf80) >> 7);

		SEXT(imm, 12);
		difftest_step(cpu.pc, cpu.pc,  (imm + cpu.gpr[(instr & 0x000f8000) >> 15]) & (~7) , is_store);
			
		int dest = (instr & 0xf80) >> 7;
		int src1 = (instr & 0xf8000) >> 15; 
		
		if(((instr & 0x7f) == 0x06f) && (dest==1 || dest==5)) //jal指令，只要目的寄存器为1或者5就认为是call
			add_ftrace(cpu.pc, true);
		
		if((((instr) & 0x7f) == 0x067) && (((instr) & 0x07000) == 0))	//jalr指令
		{
			if(dest == 0 && src1 == 1) 					//目的寄存器为0，源寄存器为1，则为return
				add_ftrace(cpu.pc,false); 
			else if(dest==1 || dest ==5)				//目的寄存器为1或者5，则是call
				add_ftrace(cpu.pc, true);
		}

	}*/
	
	static uint64_t last = 0;
	uint64_t now = get_time();
	if ((now - last) < 1000000 / 60) {
		return;
	}
	last = now;
	
  	vga_update_screen();

}
 
void exec(uint64_t n)
{
	g_print_step = (n < MAX_INST_TO_PRINT);
	switch (state){
		case NEMU_END: case NEMU_ABORT:
			Log("Program execution has ended.\n");
			return ;
		default: state = NEMU_RUNNING;
	}

	for(;n > 0;n--){
		exec_once();
		if(check_wp() && state != NEMU_ABORT)
			state = NEMU_STOP;
		if(state != NEMU_RUNNING) break;
	}

	switch(state){
		case NEMU_ABORT:
		 	if(!status())
				printf(ANSI_FMT("HIT GOOG TRAP\n",ANSI_FG_GREEN));
			else
				printf(ANSI_FMT("HIT BAD TRAP\n",ANSI_FG_RED));
	}
}
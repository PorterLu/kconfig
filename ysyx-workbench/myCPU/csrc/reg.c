#include <reg.h>
#include <common.h>
#include <cstring>
#include <sim.h>

const char *regs[] = {
	"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2", 
	"s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
	"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
	"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

#define NR_REG ((sizeof(regs))/(sizeof(regs[0])))

/*
extern "C" void set_gpr_ptr(const svOpenArrayHandle r){
	cpu_gpr = (uint64_t *)((VerilatedDpiOpenVar*)r)->datap();
}*/

CPU_state cpu;

/*
void update_register(){
	cpu.gpr[0] = Reg(0);
	cpu.gpr[1] = Reg(1);
	cpu.gpr[2] = Reg(2);
	cpu.gpr[3] = Reg(3);
	cpu.gpr[4] = Reg(4);
	cpu.gpr[5] = Reg(5);
	cpu.gpr[6] = Reg(6);
	cpu.gpr[7] = Reg(7);
	cpu.gpr[8] = Reg(8);
	cpu.gpr[9] = Reg(9);
	cpu.gpr[10] = Reg(10);
	cpu.gpr[11] = Reg(11);
	cpu.gpr[12] = Reg(12);
	cpu.gpr[13] = Reg(13);
	cpu.gpr[14] = Reg(14);
	cpu.gpr[15] = Reg(15);
	cpu.gpr[16] = Reg(16);
	cpu.gpr[17] = Reg(17);
	cpu.gpr[18] = Reg(18);
	cpu.gpr[19] = Reg(19);
	cpu.gpr[20] = Reg(20);
	cpu.gpr[21] = Reg(21);
	cpu.gpr[22] = Reg(22);
	cpu.gpr[23] = Reg(23);
	cpu.gpr[24] = Reg(24);
	cpu.gpr[25] = Reg(25);
	cpu.gpr[26] = Reg(26);
	cpu.gpr[27] = Reg(27);
	cpu.gpr[28] = Reg(28);
	cpu.gpr[29] = Reg(29);
	cpu.gpr[30] = Reg(30);
	cpu.gpr[31] = Reg(31);
	cpu.pc = top->io_pc_debug;
}*/

extern "C" void set_gpr_ptr(long long int  reg0, long long int  reg1,long long int  reg2,long long int  reg3,long long int  reg4,long long int  reg5,long long int  reg6,long long int  reg7,long long int  reg8,long long int  reg9,long long int  reg10,long long int  reg11,long long int  reg12,long long int reg13,long long int  reg14,long long int  reg15,long long int  reg16,long long int  reg17,long long int  reg18,long long int  reg19,long long int  reg20,long long int  reg21,long long int  reg22,long long int  reg23,long long int reg24,long long int reg25,long long int reg26,long long int  reg27, long long int  reg28, long long int  reg29, long long int  reg30, long long int  reg31){
	//cpu.gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());	
	cpu.gpr[0] = Reg(0);
	cpu.gpr[1] = Reg(1);
	cpu.gpr[2] = Reg(2);
	cpu.gpr[3] = Reg(3);
	cpu.gpr[4] = Reg(4);
	cpu.gpr[5] = Reg(5);
	cpu.gpr[6] = Reg(6);
	cpu.gpr[7] = Reg(7);
	cpu.gpr[8] = Reg(8);
	cpu.gpr[9] = Reg(9);
	cpu.gpr[10] = Reg(10);
	cpu.gpr[11] = Reg(11);
	cpu.gpr[12] = Reg(12);
	cpu.gpr[13] = Reg(13);
	cpu.gpr[14] = Reg(14);
	cpu.gpr[15] = Reg(15);
	cpu.gpr[16] = Reg(16);
	cpu.gpr[17] = Reg(17);
	cpu.gpr[18] = Reg(18);
	cpu.gpr[19] = Reg(19);
	cpu.gpr[20] = Reg(20);
	cpu.gpr[21] = Reg(21);
	cpu.gpr[22] = Reg(22);
	cpu.gpr[23] = Reg(23);
	cpu.gpr[24] = Reg(24);
	cpu.gpr[25] = Reg(25);
	cpu.gpr[26] = Reg(26);
	cpu.gpr[27] = Reg(27);
	cpu.gpr[28] = Reg(28);
	cpu.gpr[29] = Reg(29);
	cpu.gpr[30] = Reg(30);
	cpu.gpr[31] = Reg(31);
	cpu.pc = top->io_pc_debug;
	//printf("%lx\n", top->io_pc_debug);
}

void dump_gpr(){
	int i;
	//printf("pc: 0x%016lx\n", cpu.pc);
	for(i=0; i<32; i++)
	{
		printf("%3s = 0x%-16lx   ",regs[i], cpu.gpr[i]);
		if(i%8 == 7)
			printf("\n");
	}
}


void reg_display(){
	printf("Now pc is %lx\n", cpu.pc);
	dump_gpr();
}

word_t reg_str2val(const char *s, bool *success){
	int i;
	for(i = 0; i < NR_REG; i++){
		if(!strcmp(s, regs[i])){
			*success = true;
			return cpu.gpr[i];
		}
	}

	if(!strcmp(s, "pc"))
	{
		*success = true;
		return cpu.pc;
	}

	*success = false;
	return 0;
}
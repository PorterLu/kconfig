#include <dlfcn.h>
#include <difftest.h>
#include <utils.h>
#include <assert.h>
#include <state.h>
#include <pmem.h>
#include <log.h>
#include <img.h>
#include <reg.h>
#include <utils.h>

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction);
void (*ref_difftest_regcpy)(void *dut, bool direction);
void (*ref_difftest_exec)(uint64_t n);
char *ref_so_file;
static int skip_dut_nr_inst = 0;
static bool is_skip_ref = false;

static inline bool difftest_check_reg(const char *name, vaddr_t pc, word_t ref, word_t dut);
bool difftest_checkregs(CPU_state *ref_r, vaddr_t pc);

// check every register of CPU between dut and ref

/*
struct cpu_context{
	uint64_t gpr[32];
	uint32_t pc;
};*/

void difftest_skip_ref(){
	is_skip_ref = true;
	skip_dut_nr_inst = 0;
}


static void checkregs(CPU_state *ref, vaddr_t pc) {
  if (!difftest_checkregs(ref, pc)) {
    state = NEMU_ABORT;
	set_bad();
    reg_display();
  }
}


// check a register
static inline bool difftest_check_reg(const char *name, vaddr_t pc, word_t ref, word_t dut){
	if(ref != dut){
		Log("%s is different after executing instruction at pc = %lx right at %lx, wrong at %lx, diff %lx\n", name, pc, ref, dut, ref^dut);
		return false;
	}

	return true;
}


//implemented by checkregs
bool difftest_checkregs(CPU_state *ref_r, vaddr_t pc){
	bool isSame = true;
	int i;
	for(i = 0; i < 32; i++){
		if(!difftest_check_reg(regs[i], pc, ref_r->gpr[i], cpu.gpr[i]))
			isSame = false;
	}

//	if(!difftest_check_reg("pc", pc, ref_r->pc, cpu.pc))
//		isSame = false;
	
	return isSame;
}

//initial ref functions
void init_difftest(char *ref_so_file, long img_size, int port){
	assert(ref_so_file != NULL);

	void *handle;
	handle = dlopen(ref_so_file, RTLD_LAZY);
	assert(handle);

	*(void **)(&ref_difftest_memcpy) = dlsym(handle, "difftest_memcpy");
	assert(ref_difftest_memcpy);

	*(void **)(&ref_difftest_regcpy) = dlsym(handle, "difftest_regcpy");
	assert(ref_difftest_regcpy);

	*(void**)(&ref_difftest_exec) = dlsym(handle, "difftest_exec");
	assert(ref_difftest_exec);

	Log("Differential testing:%s", ANSI_FMT("ON", ANSI_FG_GREEN));

	/*struct cpu_context cpu_dut;
	int i;
	for(i = 0; i < 32; i++){
		cpu_dut.gpr[i] = cpu.gpr[i];
		cpu_dut.pc = cpu.pc;
	}*/

	ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
	ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

void difftest_step(vaddr_t pc, vaddr_t npc, vaddr_t addr, bool is_store){
	CPU_state ref_r;

	if(skip_dut_nr_inst > 0){
		ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
		if(ref_r.pc == npc){
			skip_dut_nr_inst = 0;
			checkregs(&ref_r, npc);
			return;
		}
		skip_dut_nr_inst --;
		if(skip_dut_nr_inst == 0);
			printf(ANSI_FMT("can not catch up with ref.pc = %lx at pc =", ANSI_FG_RED),ref_r.pc, pc);
		return;
	}

	if(is_skip_ref){
		ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
		is_skip_ref = false;
		return ;
	}
	
	ref_difftest_exec(1);
	ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

	checkregs(&ref_r, pc);


	if(is_store)
	{
		int i;
		uint8_t tmp[8];
		uint64_t data = paddr_read(addr, 8);
		ref_difftest_memcpy(addr, tmp, 8, DIFFTEST_TO_DUT);
		if( data != *((uint64_t*)tmp))
		{
			state = NEMU_ABORT;
			set_bad();
    		reg_display();
			printf("store data different at %lx\n", addr);
			printf("ref: ");
			for(i = 0; i < 8; i++)
				printf("%02x ", tmp[i]);
			printf("\n");
			printf("dut: ");
			for(i = 0; i < 8; i++)
				printf("%02x ", *((uint8_t*)&data + i));
			printf("\n");
		}
	}
	
}
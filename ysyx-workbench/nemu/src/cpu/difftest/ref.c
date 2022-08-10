#include <isa.h>
#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <difftest-def.h>
#include <memory/paddr.h>

#define RVREG_NUM 32

extern CPU_state cpu;
struct diff_context_t {
  word_t gpr[32];
  word_t pc;
};

void diff_get_regs(void* diff_context){
	struct diff_context_t* ctx = (struct diff_context_t*)diff_context;
	for(int i = 0; i < RVREG_NUM; i++){
		ctx->gpr[i] = cpu.gpr[i];
	}
	ctx->pc = cpu.pc;
}

void diff_set_regs(void* diff_context){
	struct diff_context_t* ctx = (struct diff_context_t*)diff_context;
	for(int i = 0; i < RVREG_NUM; i++){
		cpu.gpr[i] = ctx->gpr[i];
	}
	cpu.pc = ctx->pc;
}

//direction 指定拷贝方向，`DIFFTEST_TO_DUT`时，获取REF的寄存器的状态到`dut`；反之，`DIFFTEST_TO_REF`中表示往REF拷贝
void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {

	if(direction == DIFFTEST_TO_REF) 
		memcpy(guest_to_host(addr), buf, n); 
  	else if (direction == DIFFTEST_TO_DUT)
		memcpy(buf, guest_to_host(addr), n);
}

void difftest_regcpy(void *dut, bool direction) {
	if(direction == DIFFTEST_TO_REF){
		diff_set_regs(dut);
  	}else if(direction == DIFFTEST_TO_DUT){	
		diff_get_regs(dut);
  	}

}

void exec_once(Decode *s, vaddr_t pc);
void difftest_exec(uint64_t n) {
	Decode s;
  	for (;n > 0; n --) {
    	exec_once(&s, cpu.pc);
	}
}

void difftest_raise_intr(word_t NO) {
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}

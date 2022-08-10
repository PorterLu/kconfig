#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

extern riscv64_CPU_state cpu;

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
	bool isSame = true;
	int i;
	for(i=0;i<32;i++)
	{
		if(!difftest_check_reg(reg_name(i,8), pc,ref_r->gpr[i],cpu.gpr[i]))
			isSame = false;
	}

	if(!difftest_check_reg("pc", pc, ref_r->pc, cpu.pc))
		isSame = false;

	return isSame;
}

void isa_difftest_attach() {
}

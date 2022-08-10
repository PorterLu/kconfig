#include <isa.h>
#include <isa-def.h>
#include "local-include/reg.h"
#include <debug.h>

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

riscv64_CSR csr;

#define NR_REG ((sizeof(regs))/(sizeof(regs[0])))

void isa_reg_display() {
    extern riscv64_CPU_state cpu;
    int i;
    printf("now pc is %lx\n",cpu.pc);
    for(i = 0; i < NR_REG; i++)
    {
        printf("%4s:%-8lx",regs[i], cpu.gpr[i]);
        if(i%8 == 7)
          printf("\n");
    }

	printf("mepc: %lx\n", csr.mepc);
	printf("mcause: %lx\n", csr.mcause);
	printf("mtvec: %lx\n", csr.mtvec);
	printf("nstatus: %lx\n", csr.mstatus);
}

word_t isa_reg_str2val(const char *s, bool *success) {
  int i;
  for(i=0;i < NR_REG;i++)
  {
    if(!strcmp(s,regs[i]))
    {
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

void set_csr(uint64_t no, uint64_t data){

	switch(no){
		case MEPC:
			csr.mepc = data;
			return;
		case MCAUSE:
			csr.mcause = data;
			return;
		case MTVEC:
			csr.mtvec = data;
			return;
		case MSTATUS:
			csr.mstatus = data;
			return;
	}

	Assert(0, "unknown no:%lx\n", no);
}

word_t read_csr(uint64_t no){
	switch(no){
		case MEPC: return csr.mepc;
		case MCAUSE: return csr.mcause;
		case MTVEC: return csr.mtvec;
		case MSTATUS: return csr.mstatus;
	}

	Assert(0, "unknown no:%lx\n", no);
}
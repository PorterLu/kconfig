#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

#define MSTATUS 0x300
#define MISA	0x301
#define MEDELEG 0x302
#define MIDELEG 0x303
#define MIE		0x304
#define MTVEC 	0x305
#define MCOUNTERN	0x306
#define MSTATUSH	0x310
#define MSCRATCH	0x340
#define MEPC	0x341
#define MCAUSE	0x342
#define MTVAL	0x343
#define MIP		0x344
#define MTINST	0x34a
#define MTVAL2	0x34b


typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} riscv64_CPU_state;


typedef struct {
	word_t mstatus;
	word_t mepc;
	word_t mcause;
	word_t mtvec;
} riscv64_CSR;

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif

#ifndef __REG_H__
#define __REG_H__
#include <stdint.h>
#include <common.h>
#include "svdpi.h"
#include "verilated_dpi.h"

#define Reg(i) reg##i
//#define Reg(i) top->io_gpr_ptr_ ## i

typedef struct {
	word_t gpr[32];
	vaddr_t pc;
} CPU_state;

typedef struct {
	union{
		uint32_t val;
	} inst;
} DecodeInfo;

extern CPU_state cpu;
extern const char *regs[];

//void update_register();
extern "C" void set_gpr_ptr(long long int  reg0, long long int  reg1,long long int  reg2,long long int  reg3,long long int  reg4,long long int  reg5,long long int  reg6,long long int  reg7,long long int  reg8,long long int  reg9,long long int  reg10,long long int  reg11,long long int  reg12,long long int reg13,long long int  reg14,long long int  reg15,long long int  reg16,long long int  reg17,long long int  reg18,long long int  reg19,long long int  reg20,long long int  reg21,long long int  reg22,long long int  reg23,long long int reg24,long long int reg25,long long int reg26,long long int  reg27, long long int  reg28, long long int  reg29, long long int  reg30, long long int  reg31);
void dump_gpr();
void reg_display();
word_t reg_str2val(const char *s, bool *success);

#endif

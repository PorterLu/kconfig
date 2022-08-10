#ifndef __DIFFTEST_H__
#define __DIFFTEST_H__

#include <cstdio>
#include <common.h>
#include <reg.h>

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
extern char* ref_so_file;

void init_difftest(char *ref_so_file, long img_size, int port);
void difftest_step(vaddr_t pc, vaddr_t npc, vaddr_t addr, bool is_store);
void difftest_skip_ref();
#endif
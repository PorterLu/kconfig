#include <vmem.h>
#include <verilated.h>
#include <assert.h>
#include <iostream>
#include "VmyCPU.h"
#include "svdpi.h"
#include "verilated_dpi.h"
#include "VmyCPU__Dpi.h"
#include "verilated_vcd_c.h"		//用于生成波形文件
#include <getopt.h>
#include <debug.h>
#include <log.h>
#include <vmem.h>
#include <string.h>
#include <sim.h>
#include <img.h>
#include <reg.h>
#include <sdb.h>
#include <state.h>
#include <expr.h>
#include <exec.h>
#include <watchpoint.h>
#include <disasm.h>
#include <elftl.h>
#include <difftest.h>
#include <serial.h>
#include <timer.h>
#include <gpu.h>
#include <mmio.h>

char* elf_file = NULL;

void halt()
{
	state = NEMU_ABORT;
	return;
	//printf(ANSI_FMT("HIT GOOG TRAP\n",ANSI_FG_GREEN));
	//exit(0);
}

int parse_args(int argc, char *argv[])
{
	const struct option table[] = {
		{"batch",	no_argument			, NULL, 'b'},
		{"elf"	,	required_argument	, NULL, 'e'},
		{"log"	,	required_argument	, NULL, 'l'},
		{"so"	, 	required_argument	, NULL, 's'},
		{0		, 	0					, NULL,  0 }
	};
	
	int o;
	while((o=getopt_long(argc, argv, "-bs:e:l:", table, NULL))!=-1)
	{
		switch(o)
		{
			case 'b': set_batch_mode(); break;
			case 'l': log_file = optarg;break;
			case 'e': elf_file = optarg;break;
			case 's': ref_so_file = optarg; break;
			case 1: img_file = optarg;return 0;
		}
	}

	return 0;
}

int main(int argc, char *argv[]){
	parse_args(argc, argv);
	init_log(log_file);
	init_disasm("riscv64-pc-linux-gnu");
	init_regex();
	init_wp_pool();
	init_default_program();
	load_img();
	init_elf(elf_file);
	sim_init();
	contextp->commandArgs(argc, argv);
	reset(10);
	single_cycle();
	single_cycle();
	single_cycle();
	single_cycle();
	single_cycle();
	init_difftest(ref_so_file, img_size, 0);
	init_map();

	//single_cycle();
	init_serial();
	init_timer();
	init_vga();
		
	sdbloop();
	/*
	while(!contextp->gotFinish())
	{
		top->io_instr = vaddr_ifetch((unsigned int)top->io_pc_addr, 4);
		step_and_dump_wave();
		dump_gpr();
	}*/
	sim_exit();
	return status();
}	

#ifndef __SIM_H__
#define __SIM_H__
#include <verilated.h>
#include <iostream>
#include "VmyCPU.h"
#include "svdpi.h"
#include "verilated_dpi.h"
#include "VmyCPU__Dpi.h"
#include "verilated_vcd_c.h"		//用于生成波形文件

extern VmyCPU *top;
extern VerilatedContext *contextp;

void sim_exit();
void single_cycle();
void reset(int n);
void step_and_dump_wave();			//模型利用输入计算输出，同时记录时钟前进一个周期的波形
void sim_init();

#endif
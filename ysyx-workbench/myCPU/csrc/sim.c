#include <sim.h>
#include <stdlib.h>
#include <reg.h>

//extern uint64_t cpu_gpr[32];
VmyCPU *top;
VerilatedContext *contextp = NULL;

static VerilatedVcdC *tfp = NULL;

void sim_exit();

void single_cycle()
{
    top->clock = 0; top->eval(); //update_register();
    top->clock = 1; top->eval(); //update_register();
}

void reset(int n)
{
    top->reset = 1;
    while(n-->0) single_cycle();
    top->reset = 0;
	top->eval();
}


void step_and_dump_wave()			//模型利用输入计算输出，同时记录时钟前进一个周期的波形
{
	/*
    single_cycle();
    contextp->timeInc(1);
	//printf("%ld\n",top->rootp->myCPU__DOT__regFile__DOT__reg_24);
    tfp->dump(contextp->time());
	*/
	top->clock = 0; top->eval(); //contextp->timeInc(1); tfp->dump(contextp->time());
	top->clock = 1; top->eval(); //contextp->timeInc(1); tfp->dump(contextp->time());
}

void sim_init()
{
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new VmyCPU;
    contextp->traceEverOn(true);	//上下文开启追踪功能，用于生成波形
    top->trace(tfp,0);				//模型记录结果在tfp
    tfp->open("dump.vcd");			//最后的波形文件的指定
}

void sim_exit()
{
    step_and_dump_wave();
    tfp->close();
	delete(top);
}

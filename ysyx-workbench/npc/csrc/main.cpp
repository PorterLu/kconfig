#include <nvboard.h>
#include <stdio.h>
#include "Vtop.h"

static Vtop dut;
void nvboard_bind_all_pins(Vtop* top);

void single_cycle()
{
	dut.clk = 0; dut.eval();
	dut.clk = 1; dut.eval();
}

void reset(int n)
{
	dut.rst = 1;
	while(n-- > 0) single_cycle();
	dut.rst = 0;
}

int main(void)
{
	nvboard_bind_all_pins(&dut);
	nvboard_init();
	reset(1);
	printf("reset over\n");
	while(true)
	{
		nvboard_update();
		single_cycle();
	}
}

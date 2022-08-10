#include <nvboard.h>
#include <stdlib.h>
#include "Vtop.h"

static Vtop dut;

void nvboard_bind_all_pins(Vtop* top);
static void single_cycle()
{
	dut.a = rand()%2;
	dut.b = rand()%2;
       	dut.eval();
}

int main()
{
	nvboard_bind_all_pins(&dut);
	nvboard_init();


	while(1)
	{
		nvboard_update();
		single_cycle();
	}
}

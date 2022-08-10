#include "trap.h"

volatile __attribute__ ((noinline)) int add(int a, int b){ return a+b; }

int main(void)
{
	int a = 13;
	int b = 14;
	int c = add(a,b);
	check(c==27);
	return 0;
}

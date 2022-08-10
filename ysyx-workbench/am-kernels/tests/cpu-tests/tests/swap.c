#include "trap.h"
void volatile __attribute__ ((noinline)) swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int a = 13;
	int b = 14;
	swap(&a, &b);
	check(a==14);
	check(b==13);
	return 0;
}

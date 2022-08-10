#include "trap.h"



int func1();
int func2();
int func3();
int func4();
int func5();
int func6();

int (*func[])(int a) = {func1, func2, func3, func4, func5, func6};

volatile __attribute__ ((noinline))int func1(int a)
{
	return a<=1?0:1;
}


volatile __attribute__ ((noinline)) int func2(int a)
{
	return a<=2?func1(a-1):2;
}

volatile __attribute__ ((noinline)) int func3(int a)
{
	return a<=3?func2(a-1):3;
}

volatile __attribute__ ((noinline)) int func4(int a)
{
	return a<=4?func3(a-1):4;
}

volatile __attribute__ ((noinline)) int func5(int a)
{
	return a<=5? func4(a-1):5;
}

volatile __attribute__ ((noinline)) int func6(int a)
{
	return a <= 6 ? func5(a-1):func5(a-2);
}
int main(void)
{
	check(func[5](1000) > 0);
	return 0;	
}

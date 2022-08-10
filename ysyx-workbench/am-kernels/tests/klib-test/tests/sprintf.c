#include "trap.h"
#include <limits.h>
#include <string.h>
#include <stdio.h>

int data[] = {0, INT_MAX / 17, INT_MAX, INT_MIN, INT_MIN + 1,UINT_MAX / 17, INT_MAX / 17, UINT_MAX};
char* ans[] = {"0","126322567","2147483647","-2147483648","-2147483647","252645135","126322567","-1"};
int main(void)
{
	char buf[128];
	int i;
	for(i=0;i<sizeof(ans)/sizeof(ans[0]);i++)
	{
		sprintf(buf, "%d", data[i]);
		check(strcmp(buf, ans[i]) == 0);
	}
	return 0;
}

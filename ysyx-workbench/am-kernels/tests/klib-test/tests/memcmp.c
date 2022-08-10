#include "trap.h"
#include <string.h>

char* str[] = {"aaaaaaaaaaaaaaaaaaaaaaaaab","aaaaaaaaaaaaaaaaaaaaaaaac","aaaaaaaaaaaaaaaaaaaaaaaaab","hello world","\0"};

int main(void)
{
	check(memcmp(str[0],str[2],strlen(str[0])) == 0);
//	check(memcmp(str[0],str[2],strlen(str[0])+2) !=0);
	check(strlen(str[4]) == 0);
	check(memcmp(str[0],str[1],strlen(str[0])) != 0);
	check(memcmp(str[0],str[1],strlen(str[1])-1) == 0);
	return 0;
}

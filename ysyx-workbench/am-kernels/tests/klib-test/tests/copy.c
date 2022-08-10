#include "trap.h"
#include <string.h>
#define N 32
uint8_t array[N];
void reset()
{
	int i;
	for(i=0; i<N; i++)
		array[i] = (i+1)%N;
}

void cpy_test()
{
	int i,j,k;
	for(i=0; i<N;i++)
	{
		for(j=i;j<N;j++)
		{
			reset();
			strcpy((char*)array+i,(char*)array+j);
			

			for(k=0;k<i;k++)
				check(array[k] == (k+1)%N);

			for(k=0;k<N;k++)
			{
				check(array[i+k] == (k+j+1)%N);
				if(array[i+k]==0)
					break;
			}

		}
	}

}



int main(void)
{
	cpy_test();	
}

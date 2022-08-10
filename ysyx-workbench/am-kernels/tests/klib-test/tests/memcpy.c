#include "trap.h"
#include <string.h>
#define N 26
uint8_t array[N*2+1];
void reset()
{
        int i;
        for(i=0; i<N; i++)
            array[i] = (i+1)%N;
		for(i=N; i<N*2+1; i++)
			array[i] = 0;
}

void cpy_test()
{
	int i,j,len,k;
	for(i=0; i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			for(len=0;len<N;len++)
			{
				reset();
				memcpy((char*)array+i,(char*)array+j,len);

				for(k=0;k<i;k++)
					check(array[k]==(k+1)%N);

				for(k=0;k< len;k++)
				{
					if(k+j<N)
						check(array[i+k]==(k+j+1)%N);
					else
						check(array[i+k]==0);
				}

				for(k=i+len;k<N;k++)
					check(array[k] == (k+1)%N);

			}
		}
	}
}

int main(void)
{
    cpy_test();
}


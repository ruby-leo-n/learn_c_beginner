#include <stdio.h>

int main(void)
{
	int i,j;
	int gugudan[10][10];
	
	for(i=1; i<10; i++)
	{
		printf("[%d ´Ü]\n",i);
		for(j=1; j<10; j++)
		{
			gugudan[i][j] = i*j;
			printf("%d * %d = %d\n",i,j,gugudan[i][j]);
		}
	}
	
	return 0;
 } 

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi, i;
	pi = (int *)malloc(5*sizeof(int));
	
	if(pi==NULL)
	{
		printf("메모리할당에 실패");
		exit(1);
	}
	
	pi[0] = 100;
	pi[1] = 200;
	pi[2] = 300;
	pi[3] = 400;
	pi[4] = 500;
	
	for(i=0; i<5; i++)
	{
		printf("%d\n" ,*(pi+i)); // pi[0] = *(pi+0)
	}
	free(pi);
	return 0;
}

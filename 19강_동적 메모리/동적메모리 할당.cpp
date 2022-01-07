#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//int *pi;
	int *pi = (int *) malloc(sizeof(int));
	
	if (pi==NULL)
	{
		printf("동적메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	
	*pi =100;
	
	printf("%d\n",*pi);
	
	free(pi); //동적메모리 할당 해제 
	
	return 0;
	
}

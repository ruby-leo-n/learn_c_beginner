#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//int *pi;
	int *pi = (int *) malloc(sizeof(int));
	
	if (pi==NULL)
	{
		printf("�����޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}
	
	*pi =100;
	
	printf("%d\n",*pi);
	
	free(pi); //�����޸� �Ҵ� ���� 
	
	return 0;
	
}

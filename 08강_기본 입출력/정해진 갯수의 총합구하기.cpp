#include <stdio.h>

int main(void)
{
	int number,x,i,sum =0;
	printf("������ ������ �Է��ϼ���:");
	scanf("%d",&number);
	for(i=0; i<number; i++)
	{
		printf("������ ���� �Է��ϼ���:");
		scanf("%d:",&x);
		sum = sum+x;
	}
	printf("����:%d",sum);
	
	return 0;
	
}

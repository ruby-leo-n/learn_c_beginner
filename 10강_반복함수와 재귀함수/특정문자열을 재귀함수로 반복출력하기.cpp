#include <stdio.h>

void print(int count)
{
	if(count==0)
	{
		return;
	}
	else
	{
		printf("���ڿ��� ����մϴ�.\n");
		print(count-1); 
	}
}

int main(void)
{
	printf("���ڿ��� ��� ����ұ��?\n");
	
	int count;
	scanf("%d",&count);
	
	print(count); 
	return 0;
}

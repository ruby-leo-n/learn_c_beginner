#include <stdio.h>

int main(void)
{
	int matheng[5][2]; 
	int total[2]={0,};//�迭�� ��� ��Ҹ� 0���� �ʱ�ȭ  
	int i;
	for(i=0; i<5; i++)
	{
		scanf("%d %d",&matheng[i][0],&matheng[i][1]);
		total[0] += matheng[i][0];
		total[1] += matheng[i][1]; 
	}
	printf("������ ������%d \n",total[0]);
	printf("������ ������%d \n",total[1]);
	
	return 0;
}

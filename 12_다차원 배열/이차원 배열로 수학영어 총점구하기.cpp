#include <stdio.h>

int main(void)
{
	int matheng[5][2]; 
	int total[2]={0,};//배열의 모든 요소를 0으로 초기화  
	int i;
	for(i=0; i<5; i++)
	{
		scanf("%d %d",&matheng[i][0],&matheng[i][1]);
		total[0] += matheng[i][0];
		total[1] += matheng[i][1]; 
	}
	printf("수학의 총점은%d \n",total[0]);
	printf("영어의 총점은%d \n",total[1]);
	
	return 0;
}

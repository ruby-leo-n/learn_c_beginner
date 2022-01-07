#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pc;
	int i;
	pc = (char *) malloc(100*sizeof(char));
	
	if(pc==NULL)
	{
		printf("동적메모리 할당에 실패했습니다.");
		exit(1); 
	}
	
	for(i=0; i<26; i++)
	{
		*(pc+i) ='a'+i;
		//printf("%d \n",i);
	}
	
	//printf("=> %d \n",i); // i는 26 
	*(pc +i) = 0; //아스키코드 0은 NULL을 의미한다. 
	printf("%s \n",pc);
	free(pc);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pc;
	int i;
	pc = (char *) malloc(100*sizeof(char));
	
	if(pc==NULL)
	{
		printf("�����޸� �Ҵ翡 �����߽��ϴ�.");
		exit(1); 
	}
	
	for(i=0; i<26; i++)
	{
		*(pc+i) ='a'+i;
		//printf("%d \n",i);
	}
	
	//printf("=> %d \n",i); // i�� 26 
	*(pc +i) = 0; //�ƽ�Ű�ڵ� 0�� NULL�� �ǹ��Ѵ�. 
	printf("%s \n",pc);
	free(pc);
	
	return 0;
}

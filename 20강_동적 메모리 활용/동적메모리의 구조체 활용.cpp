#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
	int number;
	char title[100];
};

void bookshow(struct book *ps, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("책의 번호: %d, 책의 이름: %s \n",(ps+i)->number,(ps+i)->title);
	}
}

int main(void)
{
	//struct book *ps;
	struct book *ps = (struct book *)malloc(2*sizeof(struct book)); //구조체가 들어가는 동적메모리를 2개 선언 
	
	if(ps==NULL)
	{
		printf("메모리 할당에 실패");
		exit(1);
	}
	
	ps->number = 1; //동적메모리로 할당해도 구조체에 변수값을 할당하는 것이기에 다음과 같이 적음 
	strcpy((ps->title),"c programming");
	
	(ps+1)->number = 2; //구조체가 들어가는 동적메모리를 2개 선언했으므로 배열처럼 본다. 
	strcpy(((ps+1)->title),"c data structure");
	
	bookshow(ps,2);
	
	free(ps); 
	return 0;
}

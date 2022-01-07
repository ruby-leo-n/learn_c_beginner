#include <stdio.h>
#define SIZE 5
struct student{
	char name[20];
	int number;
	double gpa;
}; 

int main(void)
{
	struct student list[SIZE];
	int i;
	for(i=0; i<SIZE; i++){
		printf("학번을 입력해주세요: ");
		scanf("%d",&list[i].number);
		printf("이름을 입력해주세요: ");
		scanf("%s",&list[i].name);
		printf("학점을 입력해주세요: ");
		scanf("%lf",&list[i].gpa);
	}
	
	for(i=0; i<SIZE; i++){
		printf("학번: %d, 이름:%s, 학점:%.1f\n",list[i].number,list[i].name,list[i].gpa);		
	}
	
	return 0;
}

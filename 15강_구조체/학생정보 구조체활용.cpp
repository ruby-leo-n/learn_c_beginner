#include <stdio.h>
#include <stdlib.h>
#include <cstring> 


struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;
	
	printf("이름을 입력하세요:");
	scanf("%s",s.name);
	printf("학점을 입력하세요:");
	scanf("%lf",&s.grade);
	printf("학번을 입력하세요:");
	scanf("%d",&s.number);
	
	printf("학생의 이름: %s\n",s.name);
	printf("학생의 점수: %.1f\n",s.grade); 
	printf("학생의 학번: %d\n",s.number);
	
	return 0;
}

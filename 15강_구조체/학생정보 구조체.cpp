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
	s.grade = 4.5;
	strcpy(s.name, "홍길동");
	s.number = 20190001;
	printf("학생의 점수: %.1f\n",s.grade); 
	printf("학생의 이름: %s\n",s.name);
	printf("학생의 학번: %d\n",s.number);
	return 0;
}

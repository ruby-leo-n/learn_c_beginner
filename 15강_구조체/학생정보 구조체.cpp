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
	strcpy(s.name, "ȫ�浿");
	s.number = 20190001;
	printf("�л��� ����: %.1f\n",s.grade); 
	printf("�л��� �̸�: %s\n",s.name);
	printf("�л��� �й�: %d\n",s.number);
	return 0;
}

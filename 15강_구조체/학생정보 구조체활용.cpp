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
	
	printf("�̸��� �Է��ϼ���:");
	scanf("%s",s.name);
	printf("������ �Է��ϼ���:");
	scanf("%lf",&s.grade);
	printf("�й��� �Է��ϼ���:");
	scanf("%d",&s.number);
	
	printf("�л��� �̸�: %s\n",s.name);
	printf("�л��� ����: %.1f\n",s.grade); 
	printf("�л��� �й�: %d\n",s.number);
	
	return 0;
}

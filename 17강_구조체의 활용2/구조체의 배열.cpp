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
		printf("�й��� �Է����ּ���: ");
		scanf("%d",&list[i].number);
		printf("�̸��� �Է����ּ���: ");
		scanf("%s",&list[i].name);
		printf("������ �Է����ּ���: ");
		scanf("%lf",&list[i].gpa);
	}
	
	for(i=0; i<SIZE; i++){
		printf("�й�: %d, �̸�:%s, ����:%.1f\n",list[i].number,list[i].name,list[i].gpa);		
	}
	
	return 0;
}

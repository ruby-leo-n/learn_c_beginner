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
		printf("å�� ��ȣ: %d, å�� �̸�: %s \n",(ps+i)->number,(ps+i)->title);
	}
}

int main(void)
{
	//struct book *ps;
	struct book *ps = (struct book *)malloc(2*sizeof(struct book)); //����ü�� ���� �����޸𸮸� 2�� ���� 
	
	if(ps==NULL)
	{
		printf("�޸� �Ҵ翡 ����");
		exit(1);
	}
	
	ps->number = 1; //�����޸𸮷� �Ҵ��ص� ����ü�� �������� �Ҵ��ϴ� ���̱⿡ ������ ���� ���� 
	strcpy((ps->title),"c programming");
	
	(ps+1)->number = 2; //����ü�� ���� �����޸𸮸� 2�� ���������Ƿ� �迭ó�� ����. 
	strcpy(((ps+1)->title),"c data structure");
	
	bookshow(ps,2);
	
	free(ps); 
	return 0;
}

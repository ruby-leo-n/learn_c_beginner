#include <stdio.h>

int hour;
int min;
int minadd;

void counter()
{
	min += minadd;
	hour += min/60;
	min %= 60;
	hour %= 24;

}
 
int main(void)
{
	printf("�ø� �Է��ϼ���\n");
	scanf("%d",&hour);
	printf("�� �Է��ϼ���\n");
	scanf("%d",&min);
	printf("���� ���� �Է��ϼ���\n");
	scanf("%d",&minadd);
	counter();
	printf("������ �ð���:%d�� %d���Դϴ�. \n", hour, min);
	
	
	return 0; 
	
}

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
	printf("시를 입력하세요\n");
	scanf("%d",&hour);
	printf("분 입력하세요\n");
	scanf("%d",&min);
	printf("더할 분을 입력하세요\n");
	scanf("%d",&minadd);
	counter();
	printf("더해진 시간은:%d시 %d분입니다. \n", hour, min);
	
	
	return 0; 
	
}

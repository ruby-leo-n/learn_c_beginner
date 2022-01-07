#include <stdio.h>

int main(void)
{
	int year =2016;
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		printf("¿±≥‚¿‘¥œ¥Ÿ.");
	}
	else printf("¿±≥‚¿Ã æ∆¥’¥œ¥Ÿ.");
	
	return 0;
}

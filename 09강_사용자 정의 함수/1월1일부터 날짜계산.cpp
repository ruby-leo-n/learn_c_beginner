#include <stdio.h>

int getDays(int month, int day)
{
	int sum, i;
	for(i=1; i<month; i++)
	{
		if(i==2) sum+=28;
		else if (i%2==0) sum+= 30;
		else sum+= 31;
	 } 
	 return sum+day;
}


int main(void)
{
	int month, day;
	scanf("%d %d", &month, &day);
	printf("1�� 1�Ϻ��� ������� �Ÿ���%d",getDays(month,day));
}

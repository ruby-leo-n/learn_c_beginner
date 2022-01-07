#include <stdio.h>

int smallest(int number)
{
	int count = 0;
	while(number >=50000)
	{
		number-=50000;
		count++;
	}
	while(number >=10000)
	{
		number-=10000;
		count++;
	}
	while(number >=5000)
	{
		number-=5000;
		count++;
	}
	while(number >=1000)
	{
		number-=1000;
		count++;
	}
	while(number >=500)
	{
		number-=500;
		count++;
	}
	while(number >=100)
	{
		number-=100;
		count++;
	}
	while(number >=50)
	{
		number-=50;
		count++;
	}
	while(number >=10)
	{
		number-=10;
		count++;
	}
	
	return count;
}

int main(void)
{
	int num; 
	printf("액수를 적으시오");
	scanf("%d",&num);
	printf("최소로 줄수있는 갯수는 %d입니다.",smallest(num));
	return 0;
}

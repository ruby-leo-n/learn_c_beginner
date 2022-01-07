#include <stdio.h>

int main(void)
{
	int i = 1, sum =0;
	while(i<=1000)
	{
		sum = sum+i;
		i++;
	}
	printf("1부터 1000까지 합은 %d",sum);
	return 0;
}

#include <stdio.h>

int main(void)
{
	int x;
	int *y;
	
	x = 7;
	y  = &x;
	printf("%d\n",y);
	printf("%d\n",x);
	printf("%d\n",*y);
	printf("%d\n",&x);
	printf("%d\n",&y); //���� y�� �ּ� 
	return 0;
 } 

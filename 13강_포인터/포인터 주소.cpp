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
	printf("%d\n",&y); //변수 y의 주소 
	return 0;
 } 

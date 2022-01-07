#include <stdio.h>

int main (void)
{
	int x =50, y =30;
	printf("x가 y보다 크고 y는 40미만입니까? %d\n",(x>y)&&(x<40));
	printf("x가 y보다작거나 혹은 y는 30입니까? %d\n",(x<y)||(y==30));
	printf("x가 50이 아닙니까 %d",x!=50);
	return 0;
	
}

#include <stdio.h>

int main(void)
{
	int x = -150;
	if(x<0) x = -x;
	printf("x의 절대값은 %d",x);
	return 0;
}

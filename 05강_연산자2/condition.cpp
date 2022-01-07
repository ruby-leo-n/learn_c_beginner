#include <stdio.h>

int main(void)
{
	int x =-50, y = 30;
	int absoluteX = (x>0)?  x:-x;
	printf("절대값 x의 값은? %d\n",absoluteX);
	int max = (x>y)? x:y; 
	int min = (x<y)? x:y;
	printf("최대값은? %d\n",max);
	printf("최소값은? %d\n",min);
	return 0;
 } 

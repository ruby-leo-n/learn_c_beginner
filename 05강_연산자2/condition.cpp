#include <stdio.h>

int main(void)
{
	int x =-50, y = 30;
	int absoluteX = (x>0)?  x:-x;
	printf("���밪 x�� ����? %d\n",absoluteX);
	int max = (x>y)? x:y; 
	int min = (x<y)? x:y;
	printf("�ִ밪��? %d\n",max);
	printf("�ּҰ���? %d\n",min);
	return 0;
 } 

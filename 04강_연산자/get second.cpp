#include <stdio.h>
#define sec_per_min 60 
#define min_per_hour 60


int main(void)
{
	int input =1010;
	int minute =  input/ sec_per_min;
	int hour =  minute/ min_per_hour;
	printf("%d�� %d�� %d�� %d���̴�.",input,hour,minute,input%sec_per_min);
}

#include <stdio.h>

int main(void)
{
	char input[1001];
	gets(input);
	int count = 0;
	
	while(input[count]!='\0')
	{
		count++;
	}
	printf("입력한 문자열 %s 의 길이는 %d입니다.",input,count);
	return 0; 
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[100];
	gets(input);
	
	printf("문자열의 길이는 %d입니다.",strlen(input));
	return 0;
	
}

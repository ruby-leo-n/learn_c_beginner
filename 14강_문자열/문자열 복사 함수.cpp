#include <stdio.h>
#include <string.h>
int main(void)
{
	char input[11] = "i love you";
	char result[11] = "i hate you";
	
	strcpy(input,result);
	
	printf("���ڿ� ����:%s",result);
	
	return 0;
}

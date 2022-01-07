#include <stdio.h>

int main(void)
{
	int score = 85;
	if(score>=90) printf("당신의 학점은 A\n");
	else if (score>=80) printf("당신의 학점은 B\n");
	else if (score>=70) printf("당신의 학점은 C\n");
	else printf("당신의 학점은 F\n");
	
	return 0;
}

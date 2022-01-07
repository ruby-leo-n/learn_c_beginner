#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	
	int line = 0;
	
	printf("파일 이름을 입력하세요:");
	scanf("%s",fname);
	
	printf("단어 이름을 입력하세요:");
	scanf("%s",word);
	
	if((fp = fopen(fname,"r"))==NULL)
	{
		fprintf(stderr,"파일%s 을 열수 없습니다.\n",fname);
		return 0;
	}
	
	while(fgets(buffer,256,fp))// fgets는 배열의 한계 혹은 \n까지 탐색, EOF는 -1 
	{
		line++;
		if(strstr(buffer,word))
		{
			printf("라인 %d: 단어 %s가 발견되었습니다.\n",line,word);
		}
	}
	fclose(fp);
	return 0;

	
}

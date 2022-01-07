#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	
	fp = fopen("output.txt","w");
	
	if(fp==NULL){
		printf("파일 열기에 실패했음");
	}
	else{
		printf("파일 열기에 성공했음");
	}
	fputc('H',fp);
	fputc('E',fp);
	fputc('L',fp);
	fputc('L',fp);
	fputc('O',fp);
	
	fclose(fp);
	return 0;
}

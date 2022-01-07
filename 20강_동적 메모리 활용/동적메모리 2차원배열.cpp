#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int i,x,y;
	int **st = (int **) malloc(sizeof(int*)*8); // 2차원 배열 생성 
	
	for(i=0; i<8; i++){
		*(st+i) = (int *) malloc(sizeof(int)*6); // 1차원 배열 생성 
		
	}
	for(y= 0; y<8; y++){
		for(x=0; x<6; x++)
		{
			*(*(st+y)+x) = 6*y+x; //모든 배열에 값을 할당; 
		}
	}
	for(y= 0; y<8; y++){
		for(x=0; x<6; x++)
		{
			printf("%3d",*(*(st+y)+x)); //출력 
		}
			printf("\n");
	}
	for(y= 0; y<8; y++){
	free(*(st+y)); //동적메모리 반환  
	}
	
	return 0;
}

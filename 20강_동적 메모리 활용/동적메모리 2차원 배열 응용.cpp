#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//answer: 2차원 배열을 'ㄹ'자 모양으로 오름차순으로 출력해라	
	/* 1  2  3  4  5  6
	  12 11 10  9  8  7
	  13 14 15 16 17 18
	  24 23 22 21 20 19
	  25 26 27 28 29 30*/
	int i;
	int **pptr = (int **) malloc(sizeof(int*)*5);
	for(i=0; i<5; i++)
	{
		*(pptr+i) = (int *) malloc(sizeof(int)*6);
	}
	
	int x,y;
	for(x=0; x<5; x++)
	{
		
		for(y=0; y<6; y++)
		{
			*(*(pptr+x)+y) = (6*x+y)+1;
		}
	}
	
	for(x=0; x<5; x++)
	{
		if(x%2==0)
		{
		for(y=0; y<6; y++)
		{printf("%3d",*(*(pptr+x)+y));}
		}
		
		else
		{
		for(y=5; y>=0; y--)
		{printf("%3d",*(*(pptr+x)+y));}
		}
		
		printf("\n");
	}
	
	for(y=0; y<6; y++)
	{
		free(*(pptr+y));
	}
	
	
	return 0; 
	  
} 

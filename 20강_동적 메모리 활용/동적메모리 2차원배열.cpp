#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int i,x,y;
	int **st = (int **) malloc(sizeof(int*)*8); // 2���� �迭 ���� 
	
	for(i=0; i<8; i++){
		*(st+i) = (int *) malloc(sizeof(int)*6); // 1���� �迭 ���� 
		
	}
	for(y= 0; y<8; y++){
		for(x=0; x<6; x++)
		{
			*(*(st+y)+x) = 6*y+x; //��� �迭�� ���� �Ҵ�; 
		}
	}
	for(y= 0; y<8; y++){
		for(x=0; x<6; x++)
		{
			printf("%3d",*(*(st+y)+x)); //��� 
		}
			printf("\n");
	}
	for(y= 0; y<8; y++){
	free(*(st+y)); //�����޸� ��ȯ  
	}
	
	return 0;
}

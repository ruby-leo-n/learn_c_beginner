#include <stdio.h>
#define NUMBER 5 

int main(void)
{
	int array[NUMBER];
	int i, oddmax,evenmax;
	oddmax =0;
	int oddmaxindex = 0;
	evenmax =0;
	int evenmaxindex = 0;
	for(i =0; i<NUMBER; i++)
	{
		scanf("%d",&array[i]);
		if(array[i]%2==0&&evenmax<array[i])
		{
			evenmax = array[i];
			evenmaxindex = i;
			
			
		}
		else if(array[i]%2==1&&oddmax<array[i])
		{
			oddmax = array[i];
			oddmaxindex = i;
		}
	 } 
	 if(evenmax ==0){
	 printf("Ȧ���� �ִ밪�� %d ¦���� �ִ밪�������ϴ�.\n",oddmax);
	 printf("Ȧ�� �ִ밪�� �ε����� %d�Դϴ�.\n",oddmaxindex+1 );}
	 else if(oddmax ==0){
	 printf("Ȧ���� �ִ밪�� �����ϴ�. ¦���� �ִ밪�� %d �Դϴ�.\n",evenmax);
	 printf("¦�� �ִ밪�� �ε����� %d�Դϴ�.\n",evenmaxindex+1); }
	 else{
	 printf("Ȧ���� �ִ밪�� %d ¦���� �ִ밪�� %d �Դϴ�.\n",oddmax,evenmax);
	 printf("Ȧ��¦�� �ִ밪�� �ε��� ���� %d�� %d�Դϴ�.\n",	oddmaxindex+1 ,evenmaxindex+1);
	 }
	return 0;
 } 

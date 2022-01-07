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
	 printf("홀수의 최대값은 %d 짝수의 최대값은없습니다.\n",oddmax);
	 printf("홀수 최대값의 인덱스는 %d입니다.\n",oddmaxindex+1 );}
	 else if(oddmax ==0){
	 printf("홀수의 최대값은 없습니다. 짝수의 최대값은 %d 입니다.\n",evenmax);
	 printf("짝수 최대값의 인덱스는 %d입니다.\n",evenmaxindex+1); }
	 else{
	 printf("홀수의 최대값은 %d 짝수의 최대값은 %d 입니다.\n",oddmax,evenmax);
	 printf("홀수짝수 최대값의 인덱스 각각 %d와 %d입니다.\n",	oddmaxindex+1 ,evenmaxindex+1);
	 }
	return 0;
 } 

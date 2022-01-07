#include <stdio.h>

int nCr(int n, int r)
{
	if(r ==0||r==n)
	{
		return 1;
	}
	else
	{
		return nCr(n-1, r)+nCr(n-1, r-1);
	}
}

int main(void)
{
	int n,r;
	scanf("%d %d",&n,&r);
	printf("nCrÀÇ °ªÀº%d",nCr(n,r));
	return 0;
}

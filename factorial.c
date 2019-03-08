#include<stdio.h>
int main()
{
	int k,i,fact=1;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}

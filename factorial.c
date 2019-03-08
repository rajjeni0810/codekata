#include<stdio.h>
int main()
{
	int j,i,fact=1;
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}

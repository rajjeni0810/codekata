#include<stdio.h>
int main()
{
	int a,b,i,gcd,lcm;
	scanf("%d %d",&a,&b);
	
	for(i=2;i<=a&&i<=b;i++)
	{
              if(b%i==0&&a%i==0)
              gcd=i;
	}
	lcm=(a*b)/gcd;
	printf("%d",lcm);
	return 0;
}

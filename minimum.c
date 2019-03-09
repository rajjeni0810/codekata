#include<stdio.h>
int main()
{
    int a,b,i,gcd,lcm,a1,b1;
    scanf("%d %d",&a,&b);
    a1=a;
    b1=b;
    for(i=1;i<=b1&&i<=a1;i++)
    {
        if(((b1%i)==0) && ((a1%i)==0))
        gcd=i;
    }
    
     lcm=(b1*a1)/gcd;
     printf("%d",lcm);
     
        return 0;
}

#include<stdio.h>
int main()
{
    int z,d,n,i,t=0,sum=0;
    scanf("%d%d%d",&z,&d,&n);
    for(i=z;i<=n;i=i+d)
    {
        if(t==0)
        {
            sum=z;
            t=1;
        }
        else
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}

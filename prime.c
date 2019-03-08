#include<stdio.h>
int main()
{
int n,i,k=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
    if(n%i==0)
        ++k;
}
if(k==0)
    printf("yes");
else
    printf("no");
return 0;
}

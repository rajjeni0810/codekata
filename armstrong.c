#include<stdio.h>
int main()
{
int m,n,i,j,rem;
scanf("%d %d",&m,&n);
for(i=m;i<n;i++)
{
int p=i,sum=0;
for(j=0;p!=0;j++)
     {
      rem=p%10;
      sum=sum+rem*rem*rem;
      p=p/10;
     
     }
     if(sum==i)
     printf("%d\n",sum);

}
return 0;
}

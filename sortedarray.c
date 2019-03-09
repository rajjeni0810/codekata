#include <stdio.h>
int main() 
{
    int n,k[10],temp=0,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(k[i]>k[j])
           {
               temp=k[i];
               k[i]=k[j];
               k[j]=temp;
           }
       }
    }
       for(i=0;i<n;i++)
       {
           printf("%d",k[i]);
       }
	return 0;
}

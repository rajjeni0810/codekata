#include<stdio.h>
int main()
{
int up,low,i,k=0;

scanf("%d",&low);

scanf("%d",&up);
for(i=low;i<=up;i++)
{
  if(i%2!=0)
    printf("\n %d",i);
}

return 0;
}

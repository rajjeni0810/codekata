#include <stdio.h>
#include<math.h>
int main(void) {
int x,y;
scanf("%d %d",&x,&y);
for(int j=x;j<y;j++)
{
int count=0;
for(int i=2;i<j;i++)
{
if(j%i==0)
count++;
}
if(count==0)
{
	printf("%d" \n,j);
}

}
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
int a,i,j,m,n;
printf("Enter the range:");
scanf("%d %d",&a,&n);
for(i=a;i<=n;i++)
{
m=0;
for(j=2;j<=sqrt(i);j++)
if((i%j)==0)
m++;
if(m==0)
printf("%d ",i);
}
return 0;
}

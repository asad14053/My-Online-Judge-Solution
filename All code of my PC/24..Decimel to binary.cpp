#include<stdio.h>
int main()
{
int a,i,t,n,b[100],one,zero;
n=1;one=0;zero=0;
printf("Dec=");
scanf("%d",&a);
while(a!=0)
{
b[n]=a%2;

if(b[n]==1)
one++;
else
zero++;

a=a/2;
n++;
}
printf("Binary=");
for(i=n-1;i>=1;i--)
printf("%d",b[i]);
printf("\nFrequency of one=%d",one);
printf("\nFrequency of zero=%d",zero);
return 0;
}

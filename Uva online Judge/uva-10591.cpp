#include<stdio.h>
int main()
{
long long i,j,k,d,sum,num,t,n;
while(scanf("%lld",&t)==1)
{
for(k=1;k<=t;k++)
{
scanf("%lld",&n);
num=n;
for(j=1;j!=0;j++)
    {
    sum=0;
    for(i=1;i!=0;i++)
        {
        d=num%10;
        num=num/10;
        sum=sum+d*d;
        if(num==0)
            {
            num=sum;
            break;
            }
        }
    if(num<=9)
    break;
    }
if(num==1 || num==7)
    printf("Case #%lld: %lld is a Happy number.\n",k,n);
else
    printf("Case #%lld: %lld is an Unhappy number.\n",k,n);
}
}
}

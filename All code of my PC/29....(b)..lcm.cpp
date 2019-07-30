#include<stdio.h>
#include<algorithm>
#include<stdlib.h>


int lcm(long x,long y)
{
    int p=x,q=y;
    long int r,e;
    while(y!=0)
    {
    r=x%y;
    x=y;
    y=r;
    }
    e=(p*q)/x;
    printf("LCM=%ld",e);
    return 0;
    }

int main()
{
long int a,b,c;
    printf("Enter two integer number: ");
    scanf("%ld %ld",&a,&b);
if(a<b)
//swap(a,b);
{
c=a;
a=b;
b=c;
}
    lcm(a,b);

return 0;
}

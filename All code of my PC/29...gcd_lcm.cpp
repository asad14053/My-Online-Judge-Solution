#include<stdio.h>
#include<algorithm>
#include<stdlib.h>


int gcd_lcm(long x,long y)
{
    long int r;
    while(y!=0)
    {
    r=x%y;
    x=y;
    y=r;
    }
    return x;
    }

int main()
{
long int a,b,c,d,e;
    printf("Enter two integer number: ");
    scanf("%ld %ld",&a,&b);
if(a<b)
//swap(a,b);
{
c=a;
a=b;
b=c;
}
    d=gcd_lcm(a,b);
    e=(a*b)/d;
    printf("GCD=%ld, LCM=%ld",d,e);
return 0;
}

#include<stdio.h>
#include<algorithm>
#include<stdlib.h>


int gcd(long x,long y)
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
long int a,b,c,d;
    printf("Enter two integer number: ");
    scanf("%ld %ld",&a,&b);
if(a<b)
//swap(a,b);
{
c=a;
a=b;
b=c;
}
    d=gcd(a,b);

    printf("gcd=%ld",d);
return 0;
}

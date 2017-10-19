#include<stdio.h>
#include<math.h>
int prime(long long n);
int rev(unsigned m);
int main()
{
    long long x,n1,n;
    unsigned m;
    while(scanf("%lld",&x)==1)
    {
        if(prime(x)!=1)
            printf("%lld is not prime.\n",x);
        else
        {
            n1=rev(x);
            if(prime(n1)==1&&n1!=x)
              printf ("%lld is emirp.\n",x);
            else
               printf ("%lld is prime.\n",x);

        }
    }

    return 0;
}
int prime(long long n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int rev(unsigned m)
{
    int s=0;
    while(m!=0)
    {
        s=s*10+m%10;
        m/=10;
    }
    return s;
}

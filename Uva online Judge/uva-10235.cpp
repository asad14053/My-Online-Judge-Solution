#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int prime(long long int n)
{
    int i,j;
    if(n==1)
    return 0;

    if(n==2)
    return 1;

    if(n%2==0)
    return 0;

    int l=sqrt(n);

    for(i=3;i<=l;i+=2)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    long long int n,i,j,m,sum;
    while(scanf("%lld",&n)==1)
    {

        i=0; j=0; sum=0;

        if(prime(n))
            i=1;

        if(i==1)
        {
            m=n;

            while(m!=0)
            {
                sum=((sum*10)+(m%10));
                m/=10;
            }

            if(prime(sum))
            j=1;
        }

        if(j==1 && n!=sum)
            printf("%lld is emirp.\n",n);
        else if(i==1)
            printf("%lld is prime.\n",n);
        else
            printf("%lld is not prime.\n",n);
    }
    return 0;
}

#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001
bool status[MAX];

int prime(long long int n)
{
    int i;
    if(n<2)return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    if(n==3) return 1;
    if(n%3==0) return 0;
    else
    {
    for(i=5;i<=sqrt(n);i++)
        if(n%i==0)return 0;
    return 1;
    }
}
int rev (long long int n)
{
    int revv = 0;
    while(n!=0)
    {
        revv = revv * 10;
        revv = revv + n%10;
        n = n/10;
    }
    return revv;
}

int main()
{
    int  m,i,j,k,l;
    long long int n;
    //char s[9];
    while(1)
    {
        scanf("%lld",&n);
        printf("%lld\n",2*n);

        if(rev(n)==n)
        {
            if(prime(rev(n)))
                break;
        }
    }
}

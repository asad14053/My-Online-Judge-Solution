#include<bits/stdc++.h>
using namespace std;
#define SZ 1000005
int sieve();
bool p[SZ];
int main()
{
    sieve();
    int n,flg,i;
    while(scanf("%d",&n)&&n)
    {
        for(i=2; i<n; i++)
        {

            if(p[i] &&p[n-i])
            {
                printf("%d:\n%d+%d\n",n,i,n-i);
                break;
            }
        }
        if(i==n)
            printf("%d:\nNO WAY!\n",n);
    }
    return 0;
}
int sieve()
{
    memset(p,1,sizeof(p));
    p[0]=p[1]=0;
    for( int i=2; i<=sqrt(SZ); i++)
        if(p[i])
            for( int j=i*i; j<SZ; j+=i)p[j]=0;
    return 0;
}

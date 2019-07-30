#include<bits/stdc++.h>
using namespace std;
long long sh=1000003;
long long f[1000005];
long long mod(long long b,long long p)
{
    if(p==1)
        return b;
    if(p%2==1)
        return(mod(b,p-1)*b)%sh;
    else
    {
        long long res=mod(b,p/2);
        return (res*res)%sh;
    }
}
int main()
{
    long long t,n,r,s,no=0;
    scanf("%lld",&t);
    f[1]=1;
    for(long i=2; i<1000001; i++)
        f[i]=(i*f[i-1])%sh;
    while(t--)
    {
        scanf("%lld%lld",&n,&r);
        if(n<r)
        {
            printf("Case %d: 0\n",++no);
            continue;
        }
        else if(n==r||r==0)
        {
            printf("Case %d: 1\n",++no);
            continue;
        }
        s=((f[n-r]%sh)*(f[r]%sh))%sh;
       // cout<<s<<endl;
        printf("Case %lld: %lld\n",++no,(f[n]*mod(s,sh-2))%sh);

    }
    return 0;
}

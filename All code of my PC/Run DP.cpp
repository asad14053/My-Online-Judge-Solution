#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,dp[4802][801],mod=1000000007;
int fun(int run, int cnt)
{
    ll a,b,c,d,e,f,g;
    if(dp[run][cnt]!=-1) return dp[run][cnt];
    if(run>=m) return 1;
    if(cnt==n)
    {
        if(run>=m) return 1;
        return 0;
    }
    g = fun(run,cnt+1);
    a = fun(run+1,cnt+1);
    b = fun(run+2,cnt+1);
    c = fun(run+3,cnt+1);
    d = fun(run+4,cnt+1);
    e = fun(run+5,cnt+1);
    f = fun(run+6,cnt+1);
    return dp[run][cnt] = (a%mod+b%mod+c%mod+d%mod+e%mod+f%mod+g%mod)%mod;
}
int main()
{
    int T,t=1;
    scanf("%d",&T);
    while(T--)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%d%d",&n,&m);
        printf("Case %d: %d\n",t++,fun(0,0));
    }
}

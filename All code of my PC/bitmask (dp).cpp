#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll m,n,k,a[20],x,y,c;
ll sa[20][20];

ll dp[20][1<<19];

ll compute(ll pos,int bitmask)
{
    if(__builtin_popcount(bitmask)==m)
    {
        return 0;
    }
    if(dp[pos][bitmask]!=-1)
        return dp[pos][bitmask];

    ll ans=0;
    for(int i =1; i<=n; i++)
    {
        if(!((1<<i)&bitmask))
            ans = max(ans,a[i]+sa[pos][i]+compute(i,bitmask|(1<<i)));
    }

    return dp[pos][bitmask] = ans;
}


int main()
{
//	freopen("in.txt","r+",stdin);
    cin>>n>>m>>k;
    for(int i = 1; i<=n; i++)
        cin>>a[i];

    for(int i = 0; i<k; i++)
    {
        cin>>x>>y>>c;
        sa[x][y]=c;
    }
    memset(dp,-1,sizeof dp);
    cout<<compute(0,0);
    return  0;
}

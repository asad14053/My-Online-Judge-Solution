#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
vector<ll>g[10001],cost[10001];
long long dis[10001];

struct info1
{
    ll a,taka;
    info1(ll x, ll y)
    {
        a=x;
        taka=y;
    }
    bool operator<(const info1&p) const
    {
        return p.taka<taka;
    }
};
priority_queue<info1>pq;
void djk(ll src)
{
    ll i,vv,uu,sz;
    pq.push(info1(src,0));
    dis[src]=0;
    while(!pq.empty())
    {
        info1 pp = pq.top();
        pq.pop();
        uu = pp.a;
        sz = g[uu].size();
        for(i=0; i<sz; i++)
        {
            vv = g[uu][i];
            if(dis[uu]+cost[uu][i]<dis[vv])
            {
                dis[vv]=dis[uu]+cost[uu][i];
                pq.push(info1(vv,dis[vv]));
            }
        }
    }
}
int main()
{
    ll T,t=1,i,j,cst,ind,sc;
    long long ans,mx=1e15;
    string s,s1;
    map<string,ll>mp;
    scanf("%lld",&T);
    while(T--)
    {
        mp.clear();
        ind = 1;
        scanf("%lld%lld",&n,&m);
        for(j=0; j<m; j++)
        {
            cin>>s>>s1>>cst;
            if(mp[s]==0) mp[s]=ind++;
            if(mp[s1]==0) mp[s1]=ind++;
            g[mp[s]].push_back(mp[s1]);
            g[mp[s1]].push_back(mp[s]);
            cost[mp[s1]].push_back(cst);
            cost[mp[s]].push_back(cst);
        }
        //for(i=0; i<m; i++) cout<<in[i].u<<" "<<in[i].v<<" "<<in[i].w<<endl;

        ans=0;
        for(j=1; j<=n; j++) dis[j]=mx;
        djk(1);
        long long bb=0;
        for(i=1;i<=n;i++)
        {
            if(dis[i]>bb)
            {
                bb = dis[i];
                sc = i;
            }
        }
        //cout<<"SRC "<<i<<endl;
        for(j=1; j<=n; j++) dis[j]=mx;
        djk(sc);
        for(j=1; j<=n; j++)
        {
            //cout<<dis[j]<<" ";
            ans = max(ans,dis[j]);
            //cout<<ans<<endl;
        }
        //cout<<endl;
        printf("Case %lld: %lld\n",t++,ans);
        for(i=1;i<=n;i++)
        {
            g[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}


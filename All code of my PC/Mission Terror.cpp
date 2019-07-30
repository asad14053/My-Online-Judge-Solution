#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,par[10004],m,out[10004];
vector<ll>g[10004],cost[10004];
long long dis[10004],mx=9999999999999999,ans;
struct info
{
    ll u,v,w;
} in[100004];
struct info1
{
    ll aa,taka;
    info1(ll x, ll y)
    {
        aa=x;
        taka=y;
    }
    bool operator<(const info1&p) const
    {
        return p.taka<taka;
    }
};
priority_queue<info1>pq;
bool cmp(info a,info b)
{
    return a.w<b.w;
}
ll fnd(ll r)
{
    if(par[r]==r) return r;
    else return par[r] = fnd(par[r]);
}
void mst()
{
    ll i,p,q,cnt=0;
    for(i=1; i<=10002; i++)
    {
        par[i]=i;
        g[i].clear();
        cost[i].clear();
    }
    for(i=0; i<m; i++)
    {
        p = fnd(in[i].u);
        q = fnd(in[i].v);
        if(p!=q)
        {
            par[p]=q;
            g[in[i].u].push_back(in[i].v);
            g[in[i].v].push_back(in[i].u);
            cost[in[i].u].push_back(in[i].w);
            cost[in[i].v].push_back(in[i].w);
            cnt++;
            //cout<<in[i].u<<" "<<in[i].v<<" "<<in[i].w<<endl;
            if(cnt==n-1) break;
        }
    }
}
void djk(ll src)
{
    ll i,vv,uu;
    pq.push(info1(src,0));
    dis[src]=0;
    while(!pq.empty())
    {
        info1 pp = pq.top();
        pq.pop();
        uu = pp.aa;
        for(i=0; i<g[uu].size(); i++)
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
    ll T,t=1,i,j,cst,ind,sc,bb;
    char s[40],s1[40];
    map<string,ll>mp;
    scanf("%lld",&T);
    while(T--)
    {
        mp.clear();
        ind = 1;
        scanf("%lld%lld",&n,&m);
        getchar();
        for(j=0; j<m; j++)
        {
            scanf("%s %s %lld",s,s1,&cst);
            if(mp[s]==0) mp[s]=ind++;
            if(mp[s1]==0) mp[s1]=ind++;
            in[j].u=mp[s];
            in[j].v=mp[s1];
            in[j].w=cst;
        }
        sort(in,in+m,cmp);
        //for(i=0; i<m; i++) cout<<in[i].u<<" "<<in[i].v<<" "<<in[i].w<<endl;
        mst();
        for(j=1; j<=n; j++) dis[j]=mx;
        djk(1);
        bb=0;ans=0;
        for(i=1;i<=n;i++)
        {
            if(dis[i]>bb)
            {
                bb = dis[i];
                sc = i;
            }
        }
        //cout<<bb<< " "<<sc<<endl;
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
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long ll;
#define mx 1000009
struct edge
{
    int u,v,w;
    bool operator<(const edge &p)const
    {
        return w<p.w;
    }
};
ll pr[mx];
vector<edge>e;
int find(ll r)
{
    return (pr[r]==r)?r:find(pr[r]);
}
int mst(ll n)
{
    sort(e.begin(),e.end());
    for(int i=0; i<mx; i++)
        pr[i]=i;
    ll s=0,c=0;
    for(int i=0; i<e.size(); i++)
    {
        ll u=find(e[i].u);
        ll v=find(e[i].v);
        if(u!=v)
        {
            pr[u]=v;
            s+=e[i].w;
           if(c==n-1)
              break;
            c++;
        }
    }
    return s;
}
int main()
{
    ll n,m;
   while( cin>>n>>m)
   {
        edge p;
      memset(pr ,0,sizeof(pr));
       e.clear();
        for(int i=0; i<m; i++)
        {
            cin>>p.u>>p.v>>p.w;
            e.push_back(p);
        }
        cout<<mst(n)<<endl;
   }
    return 0;
}

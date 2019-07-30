#include<bits/stdc++.h>
using namespace std;
int pr[1000];
struct edge
{
    int u,v,w;
    bool operator< (const edge&p) const
    {
        return w<p.w;
    }
};
vector<edge>vt;
int fnd(int r)
{
    return (pr[r]==r)?r:fnd(pr[r]);
}
int mst(int n)
{
    sort(vt.begin(),vt.end());
    int i,j,u,v,sm=0,cnt=0;
    for(int i=1; i<=n; i++) pr[i]=i;
    for(i=0; i<(int)vt.size(); i++)
    {
        u=fnd(vt[i].u);
        v=fnd(vt[i].v);
        if(u!=v)
        {
            pr[u]=v;
            cnt++;
            sm+=vt[i].w;
            if(cnt==n-1) break;
        }
    }
    return sm;
}
int main()
{
    edge get;
    int n,u,v,w,i,j,m;
    while(cin>>n>>m)
    {
        vt.clear();
        for(i=1; i<=m; i++)
        {
            cin>>u>>v>>w;
            get.u=u;
            get.v=v;
            get.w=w;
            vt.push_back(get);
        }
        cout<<"MST = "<<mst(n)<<endl;
    }
    return 0;
}

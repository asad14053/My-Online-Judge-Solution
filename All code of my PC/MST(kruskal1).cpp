#include<bits/stdc++.h>
using namespace std;
int p[100];
struct node
{
int u,v,w;
bool operator<(const node &p) const{ return w<p.w; }
};
vector<node>e;
int find(int r)
{
    return p[r]=(p[r]==r)?r:find(p[r]);
}
int mst(int n)
{
    sort(e.begin(),e.end());
    for(int i=0;i<=n;i++)
        p[i]=i;
    int c=0,cost=0;
    for(int i=0;i<n;i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            p[v]=u;
            c++;
            cost+=e[i].w;
            if(c==n-1)
                break;
        }
    }
    return cost;
}
int main()
{
    node p;
    int n,m,a,b,c,x,y,z;
    while(cin>>n>>m)
    {
        for(int i=0;i<m;i++)
        {
            cin>>x>>y>>z;
            p.u=x,p.v=y,p.w=z;
            e.push_back(p);
        }
        cout<<mst(n)<<endl;
    }
    return 0;
}

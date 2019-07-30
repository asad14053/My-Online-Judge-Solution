#include<bits/stdc++.h>
using namespace std;
struct node
{
    int u,w;
    node(int a, int b)
    {
        u=a;
        w=b;
    }
    bool operator<(const node&p) const
    {
        return p.w<w;
    }
};
priority_queue<node>q;
vector<int>g[100],cst[100];
int d[100];
void dkt(int n, int sc)
{
    int v,u,i;
    for(i=0;i<100;i++) d[i]=129299;
    q.push(node(sc,0));
    d[sc]=0;
    while(!q.empty())
    {
        node tp=q.top();q.pop();
        u = tp.u;
        for(i=0;i<g[u].size();i++)
        {
            v=g[u][i];
            if(d[u]+cst[u][i]<d[v])
            {
                d[v]=d[u]+cst[u][i];
                q.push(node(v,d[v]));
            }
        }
    }
}
int main()
{
    int i,j,n,m,p,edge,nd,src,tar,wt;
    while(cin>>nd>>edge)
    {
        for(i=1;i<100;i++)
        {
            g[i].clear();
            cst[i].clear();
        }
        while(edge--)
        {
            cin>>n>>m>>wt;
            g[n].push_back(m);
            g[m].push_back(n);
            cst[m].push_back(wt);
            cst[n].push_back(wt);
        }
        cin>>src;
        dkt(nd,src);
        for(i=1;i<=nd;i++) cout<<src<<" "<<i<<" "<<d[i]<<endl;
    }
    return 0;
}


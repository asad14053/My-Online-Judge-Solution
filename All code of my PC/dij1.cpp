#include<bits/stdc++.h>
using namespace std;
struct node
{
    int u,w;
    node(int a,int b)
    {
        u=a;
        w=b;
    }
    bool operator <(const node&p)const
    {
        return p.w>w;
    }
};
priority_queue<node>q;
vector <int>g[100],cost[100];
int d[100];
int dij(int n,int src)
{
    for(int i=0;i<100;i++)
        d[i]=10000;
    q.push(node(src,0));
    d[src]=0;
    while(!q.empty())
    {
        node tp=q.top();
        int u=tp.u;
        q.pop();
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(d[u]+cost[u][i]<d[v])
            {
                d[v]=d[u]+cost[u][i];
                q.push(node(v,d[v]));
            }
        }
    }
}
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        for(int i=0;i<100;i++)
        {
            g[i].clear();
            cost[i].clear();
        }
        for(int i=0;i<m;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            g[x].push_back(y);
            g[y].push_back(x);
            cost[x].push_back(z);
            cost[y].push_back(z);
        }
        int src;
        cin>>src;
        dij(n,src);
        for(int i=1;i<=n;i++)
            cout<<src<< "to"<<i<< "  :"<<d[i]<<endl;
    }
}


/*
4 5
1 2 1
2 3 2
1 3 3
2 4 1
3 4 9
1

*/

#include<bits/stdc++.h>
using namespace std;
#define mx 1000
vector<int>g[mx],cost[mx];
int d[mx],par[mx];
struct node
{
    int u,w;
    node(int a,int b)
    {
        u=a;
        w=b;
    }
    bool operator < ( const node& p ) const
    {
        return w > p.w;
    }
};
int dijkstra(int s, int n)
{
    memset(d,63,sizeof(d));
    memset(par,-1,sizeof(par));
    priority_queue<node>q;
    q.push(node(s,0));
    d[s]=0;
    while(!q.empty())
    {
        node top=q.top();
        q.pop();
        int u=top.u;
        if(u==n) return d[n];
        for(int i=0; i<(int)g[u].size(); i++)
        {
            int v=g[u][i];
            if(d[u]+cost[u][i]<d[v])
            {
                d[v]=d[u]+cost[u][i];
                par[v]=u;
                q.push(node(v,d[v]));
            }
        }
    }
    return -1;
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        int u,v;
        int w;
        cin>>u>>v>>w;
        g[u].push_back(v);
        g[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);

    }
    int ret=dijkstra(1,n);
    if(ret==-1) puts("No path!");
    else
    {
        //       cout<<d[n]<<endl;
        int u=n;
        vector<int>out;
        while(u!=-1)
        {
            out.push_back(u);

            u=par[u];

        }
        reverse(out.begin(),out.end());
        for(int i=0; i<(int)out.size(); i++)
        {
            cout<<out[i];
            if(i!=out.size()-1)
                cout<<" ";
        }

        puts("");

    }
}

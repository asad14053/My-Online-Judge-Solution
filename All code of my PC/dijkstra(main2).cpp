#include <bits/stdc++.h>

using namespace std;
vector<int>g[200000];
vector<int>cost[200000];

struct node
{
    int u,w;
    node(int a, int b)
    {
        u=a;
        w=b;
    }
    bool operator < (const node& p) const
    {
        return w> p.w;
    }
};
long long int d[200000];
int par[200000];

int dijkstra(int n)
{
    //memset(d,100000000000000000,sizeof(d));
    for(int k=0; k<200000; k++) d[k]=100000000000000000;
    memset(par,-1,sizeof(par));

    priority_queue<node>q;
    q.push(node(1,0));
    d[1]=0;
    while(!q.empty())
    {
        node top=q.top();
        q.pop();
        int u=top.u;
        if(u==n)
            return d[n];
        for(int i=0; i<(int)g[u].size(); i++)
        {
            int v=g[u][i];
            if(d[u]+cost[u][i] <d[v])
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
    while(cin>>n>>e)
    {
        /*for(int j=0; j<100000; j++){
            g[j].clear();
            cost[j].clear();
        }*/
        for(int i=0; i<e; i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            g[u].push_back(v);
            g[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        int ret=dijkstra(n);
        if(ret==-1)
            printf("-1\n");
        else
        {
            int u=n;
            vector<int>out;
            while(u!=-1)
            {
                out.push_back(u);
                u=par[u];
            }
            reverse(out.begin(),out.end());
            for(int i=0; i<out.size(); i++)
            {
                cout<<out[i];
                if(i!=out.size()-1)
                    printf(" ");
            }
            cout<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
vector<int> g[100],cost[100];
struct node
{
    int u,w;
    node(int x, int y)
    {
        u=x, w=y;
    }
    bool operator<(const node&p) const
    {
        return w<p.w;
    }

};
void dij (int s, int n)
{
    int d[100], par[100];
    memset(d,63,sizeof(d));
    priority_queue<node>q;
    q.push(node(s,0));
    par[s]=-1;
    d[s]=0;
    while(!q.empty())
    {
        node tp = q.top();q.pop();
        int x = tp.u;
        for(int i=0;i<g[x].size();i++)
        {
            int v=g[x][i];
            if(d[x]+cost[x][i]<d[v])
            {
                par[v]=x;
                d[v]=d[x]+cost[x][i];

                q.push(node(v,d[v]));
            }
        }


    }
    for(int i=0;i<n;i++)
        cout<<s<<"->"<<i+1<<"="<<d[i+1]<<" p="<<par[i+1]<<endl;
}
int main()
{
    int n,e,x,y,a,b,w;
    while(cin>>n>>e)
    {
        for(int i=0;i<e;i++)
        {
            cin>>x>>y>>w;
            g[x].push_back(y);
            g[y].push_back(x);
            cost[x].push_back(w);
            cost[y].push_back(w);
        }
        dij(1,n);
    }

    return 0;
}
/*
4 4
1 2 2
2 3 1
1 3 5
3 4 3
*/

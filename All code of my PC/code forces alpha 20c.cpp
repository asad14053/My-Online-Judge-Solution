#include<bits/stdc++.h>
using namespace std;
#define M 100009
vector<long>g[M],cost[M];
struct node
{
    int u,w;
    node(int a,int b)
    {
        u=a;
        w=b;
    }
    bool operator<(const node&p)const
    {
        return w>p.w;
    }
};
long d[M],p[M];
int dijkstra(long n)
{
 memset(d,63,sizeof(d));
 memset(p,-1,sizeof(p));
 priority_queue<node>q;
 q.push(node(1,0));
 d[1]=0;
 //p[1]=1;
 while(!q.empty())
 {
     node top=q.top();
     q.pop();
     int u=top.u;
     if(u==n) return d[n];
     for(int i=0;i<g[u].size();i++)
     {
        int v=g[u][i];
        if(d[u]+cost[u][i]<d[v])
        {
            d[v]=d[u]+cost[u][i];
            p[v]=u;
            q.push(node(v,d[v]));
        }
     }
 }
 return -1;
}
int main()
{
    long n,m;
   // while(1)
    {
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            g[u].push_back(v);
            g[v].push_back(u);
            cost[v].push_back(w);
            cost[u].push_back(w);
        }
        int l=dijkstra(n);
        if(l==-1)
            cout<<"-1"<<endl;
        else
        {
          vector<int> o;
          int h=n;
          while(h!=-1)
          {
              o.push_back(h);
              h=p[h];
          }
          reverse(o.begin(),o.end());
          for(int i=0;i<o.size();i++)
          {
              cout<<o[i]<<" ";
          }
          cout<<endl;
        }
    }
    return 0;
}

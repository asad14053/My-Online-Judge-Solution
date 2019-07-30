
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pii pair< int, int >
#define MAX 10000
vector< pii > G[MAX];

int d[MAX];
void dijkstra(int s)
{
    int w, u, v, e;
    priority_queue< pii, vector< pii >, greater< pii > > Q;

    memset(d,63,sizeof(d));
    Q.push(pii(0, s));
    d[s] = 0;
    while(!Q.empty())
    {
        w = Q.top().ff;
        u = Q.top().ss;
        Q.pop();
       if(d[u] < w) continue;

        for(int i = 0; i < G[u].size(); i++)
        {
            v = G[u][i].ss;
            e = G[u][i].ff;
            if(d[v] > max(w, e))
            {
                d[v] = max(w, e);
                Q.push(pii(d[v], v));
            }
        }
    }
}

int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int t,n, e, u, v, w;
    cin>>t;//cout<<endl;

    for(int i= 1; i<= t; i++)
    {

        cin>>n>>e;
        memset(G,0,sizeof(G));
        for(int j = 0; j< e; j++)
        {
            cin>>u>>v>>w;
            G[u].push_back(pii(w, v));
            G[v].push_back(pii(w, u));
        }
        int t;
        cin>>t;
      //  memset(d,63, sizeof(d));
        dijkstra(t);
        printf("Case %d:\n", i);
        for( int k = 0; k < n; k++)
        {
            if(d[k] <1061109567) cout<<d[k]<<endl;
            else printf("Impossible\n");
        }
    }
    return 0;
}


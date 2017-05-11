#include <bits/stdc++.h>
using namespace std;
#define nil -100
#define infinity 2147483647
#define white 0
#define gray 1
#define black 2
#define MAX 100
int color[MAX], dist[MAX], par[MAX];

vector < int > adj[MAX];
int node, edge;
int dis = 0 ;
int BFS(int source)
{
    int i,j;
    for(i=1; i<=node; i++)
    {
        color[i] = white;
        dist[i] = infinity;
        par[i] = nil;
    }

    color[source] = gray;
    dist[source] = 0;
    par[source] = nil;

    queue < int > Q;
    Q.push(source);

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(j = 0; j < adj[u].size(); j++)
        {
            int v = adj[u][j];
            if(color[v] == white)
            {
                color[v] = gray;
                dist[v] = dist[u]+1;
                par[v] = u;
                Q.push(v);
            }
        }
        color[u] = black;
    }
}


int main()
{
    int i,j,k;

    int s = 1;

    while(cin>>edge)
    {

        map <int , int> m;

        memset(adj,NULL,sizeof(adj));
        memset(color, 0 , sizeof(color));
        memset (par, 0 , sizeof(par));
        memset ( dist , 0 , sizeof(dist));
        if(edge == 0)
            break;
        int index = 1;
        for(i=0; i< edge; i++)
        {
            int x, y;
            scanf("%d%d",&x,&y);
            if(!m[x])
                m[x] = index++;
            if(!m[y])
                m[y] = index++;
            adj[m[x]].push_back(m[y]);
            adj[m[y]].push_back(m[x]);
        }
        node = index -1 ;
        int from , to ;
        while(cin>>from>>to)
        {
            int count = 0;
            if(from == 0 && to ==0)
                break ;
            BFS(m[from]);
            for(j=1; j<index; j++)
            {
                if(dist[j]> to)
                    count++;
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",s,count,from, to);
            s++;
        }
    }

}

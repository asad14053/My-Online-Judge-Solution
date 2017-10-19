#include<bits/stdc++.h>
using namespace std;

vector<int>graph[21];

void bfs(int s, int d)
{
    queue< int >q;
    int visited[50]= {0}, level[50];
    visited[s]=1;
    level[s]=0;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        for(int l=0; l<graph[u].size(); l++)
        {
            int v = graph[u][l];
            if(!visited[v])
            {
                visited[v]=1;
                level[v] = level[u]+1;
                q.push(v);
            }
        }
        q.pop();
    }
    printf("%2d to %2d: %d\n", s, d, level[d]);
}

int main()
{
    int x, y, caseno=0;
    while(scanf("%d",&x)==1)
    {
        for(int j=0; j<x; j++)
        {
            scanf("%d",&y);
            graph[1].push_back(y);
            graph[y].push_back(1);
        }
        for(int i=2; i<=19; i++)
        {
            scanf("%d",&x);
            for(int j=0; j<x; j++)
            {
                scanf("%d",&y);
                graph[i].push_back(y);
                graph[y].push_back(i);
            }
        }
        int src, dest, n;
        scanf("%d",&n);
        printf("Test Set #%d\n",++caseno);
        for(int i=0; i<n; i++)
        {
            scanf("%d %d",&src, &dest);
            bfs(src,dest);
        }
        printf("\n");
        for(int i=0; i<21; i++)
        {
            graph[i].clear();
        }
    }
    return 0;
}


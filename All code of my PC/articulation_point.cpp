#include<bits/stdc++.h>
using namespace std;
vector<int>g[1000];
int t=0,root=0,child=0,low[1000]={0},dis[1000]={0};
bool vis[1000]={0},art[1000]={0};
void articulation(int u)
{
    t++;
    vis[u]=true;
    low[u]=dis[u]=t;
    for(int i=0;i<g[u].size();i++)
    {
        int v=g[u][i];
        if(!vis[v])
        {
            articulation(v);
            low[u]=min(low[u],low[v]);
            if(dis[u]<=low[v] and u!=root)
                art[u]=true;
            else if(u==root)
            {
                child++;
                if(child>1)
                    art[u]=true;
            }
        }
        else low[u]=min(low[u],dis[v]);
    }
}
int main()
{
    int x,y,z,a,b,c,n,e;
    while(cin>>n>>e)
    {
        for(int i=0; i<e; i++)
        {
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        root=1;
        for(int i=1; i<=n; i++)
            if(!vis[i])
                articulation(i);
        for(int i=1; i<=n; i++)
            if(art[i])
                cout<<i<<endl;
    }
    return 0;
}

/*
7 7

1 2
1 3
3 4
3 7
4 5
4 6
6 7


1
3
4
*/

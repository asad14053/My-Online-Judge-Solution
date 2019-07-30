#include<bits/stdc++.h>
using namespace std;
vector<int>g[1000];
map<pair<int,int>,int>mp;
int child=0,t=0,root=0,low[1000]= {0},dis[1000]= {0},par[1000]= {0};
bool vis[1000]= {0}, art[1000]= {0};
void articulation(int u)
{
    vis[u]=true;
    t++;
    dis[u]=low[u]=t;
    for(int i=0; i<g[u].size(); i++)
    {
        int v=g[u][i];
        if(!vis[v])
        {
            par[v]=u;
            articulation(v);
            low[u]=min(low[u],low[v]);
            if(dis[u]<low[v])
            {
                if(mp.count(make_pair(min(u,v),max(u,v)))==0)
                    mp[make_pair(min(u,v),max(u,v))]=1;
            }
        }
        else
        {
            if(v!=par[u])
                low[u]=min(low[u],dis[v]);
        }
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
        cout<<"critical links: "<<mp.size()<<endl;
        map<pair<int,int>,int>::iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
            cout<<it->first.first<<" "<<it->first.second<<endl;
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

critical links: 3
1 2
1 3
4 5
*/

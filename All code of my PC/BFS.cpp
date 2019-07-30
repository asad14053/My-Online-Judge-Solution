#include<bits/stdc++.h>
using namespace std;
vector<int>g[10000];
int bfs(int s,int n)
{

    queue<int>q;
    int vis[1000]= {0},lev[1000],par[1000];
    q.push(s);
    vis[s]=1;
    lev[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0; i<g[u].size(); i++)
        {
            cout<<"---------"<<endl;
            int v=g[u][i];
            if(!vis[v])
            {
                lev[v]=lev[u]+1;
                par[v]=u;
                vis[v]=1;
                q.push(v);
            }
        }
        q.pop();
    }
    for(int i=1; i<=n; i++)
        cout<<s<<" to "<<i<<" "<<lev[i]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e;
        int x,y;
        cin>>n>>e;
        for(int i=0; i<e; i++)
        {
            cout<<"---"<<endl;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        int m;
        while(cin>>m)
        {
        bfs(m,n);
        }
        cout<<"----"<<endl;
    }
    return 0;
}
/*
4
4 6
1 2
2 3
3 4
1 4
2 4
1 3
2
*/

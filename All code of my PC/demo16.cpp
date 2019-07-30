#include<bits/stdc++.h>
using namespace std;
vector<int>g[2504];
int bfs(int s,int n,int z)
{

    queue<int>q;
    int vis[2504]= {0},lev[2504],par[2504];
    q.push(s);
    vis[s]=1;
    lev[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0; i<g[u].size(); i++)
        {
            //cout<<"---------"<<endl;
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
    int l=0;
    for(int i=1; i<=n; i++)
    {

        if(lev[i]>=0 and lev[i]<=z and (i)!=s)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int n,e;
    int x,y,m,z,o=1;
    while(cin>>n>>e>>m>>z)
    {
        if(!n,!e,!m,!z)
        {
            cout<<endl;
             break;
        }

        for(int i=0; i<=n; i++)
            g[i].clear();
        for(int i=1; i<=e; i++)
        {
           // cout<<"---"<<endl;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        cout<<"Teste "<<o++<<endl;
        bfs(m,n,z);
       cout<<endl;
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

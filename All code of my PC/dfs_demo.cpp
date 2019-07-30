#include<bits/stdc++.h>
using namespace std;
vector<int> g[10000];
int par[10000];
bool vis[10000]= {0};
int c=0;
void dfs(int s)
{


    vis[s]=true;
    for(int i=0; i<g[s].size(); i++)
    {
        if(vis[g[s][i]])
        {
            cout<<"cycle detected"<<endl;
            exit(0);
        }
        else
        dfs(g[s][i]);
    }

}
int main()
{
    int x,y,z,a,b,e,n;

    while(cin>>n>>e)
    {
        for(int i=0; i<e; i++)
        {
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        dfs(1);

    }
}

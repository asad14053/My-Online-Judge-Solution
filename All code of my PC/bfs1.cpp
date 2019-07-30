#include<bits/stdc++.h>
using namespace std;
vector<int>g[1000];
int bfs(int s,int n)
{
    queue<int>q;
    int vis[100]={0},lev[100]={0},par[100];
    q.push(s);
    vis[s]=1;
    lev[s]=0;
    par[s]=-1;
    while(!q.empty())
    {
                   // cout<<"---------"<<endl;
        int u=q.front();        q.pop();
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(!vis[v])
            {
                lev[v]=lev[u]+1;
                vis[v]=1;
                par[v]=u;
                q.push(v);
            }
                        //cout<<"---------"<<endl;

        }

    }
    for(int i=1;i<=n;i++)
    {
        cout<<s<< "to"<<i<<" "<<" source: "<<par[i]<<"  level "<<lev[i]<<endl;
                  cout<<"---------"<<endl;
    }
    return 0;
}
int main ()
{
    int t,n,e,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>e;
        for(int i=0;i<e;i++)
        {
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);

        }
        int m;
        cin>>m;
        bfs(m,n);

    }

}
/*

     *1
    /   \
   /      \
  /        \
*2____ ____*3
             \
              \
               \
                \
                 *4
4
4 4
1 2
1 3
2 3
3 4
1


4 4
1 2
1 3
2 3
3 4
2


4
4 6
1 2
2 3
3 4
1 4
2 4
1 3
1

2
5 5
1 2
2 3
3 4
4 5
2 4
1


*/

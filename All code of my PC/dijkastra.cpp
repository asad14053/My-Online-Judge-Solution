#include<bits/stdc++.h>
using namespace std;
vector<int>g[1000];
int cost[1000][1000];
int dij(int n,int s)
{
    int dis[1000],par[1000];
    memset(dis,63,sizeof(dis));
   memset(par,-1,sizeof(par));
    queue<int>q;
    q.push(s);
    dis[s]=0;
    par[s]=0;
    while(!q.empty())
    {
        //cout<<"-----1----"<<endl;
        int u=q.front();
        for(int i=0;i<g[u].size();i++)
        {
          //  cout<<"----2-----"<<endl;
            int v=g[u][i];
            if(dis[u]+cost[u][v]<dis[v])
            {
                //    cout<<"----3-----"<<endl;
                dis[v]=dis[u]+cost[u][v];
                par[v]=u;
                q.push(v);
               // cout<<dis[v]<<endl;
              // cout<<cost[u][v]<<endl;
            }
        }
        q.pop();
    }
    for(int i=0;i<=n;i++)
    {
        cout<<s<<"  to "<<i<<" distance :"<<dis[i]<<" parent "<<par[i]<<endl;
    }
}
int main()
{
    int t;
cin>>t;cout<<endl;
  while(t--)
    {
        int n,e;
        cin>>n>>e;

        for(int i=0;i<e;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            g[x].push_back(y);
            g[y].push_back(x);
            cost[x][y]=z;
            cost[y][x]=z;
        }
        int m;
        cin>>m;
        dij(n,m);
    }


    return 0;
}


/*


     *1
    /   \5
  2/      \
  /        \
*2____1____*3
             \
              \3
               \
                \
                 *4

4
4 4
1 2 2
2 3 1
1 3 5
3 4 3
1


*/
/*
5
5 9
1 2 4
1 3 2
2 4 2
2 5 3
2 3 3
3 2 1
3 5 5
3 4 4
5 4 1

*/

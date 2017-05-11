#include<bits/stdc++.h>
#define max 25
using namespace std;
vector<int >g[max];
int visited[50]= {0},level[50]= {0};
int parent[50];
void bfs(int src,int n)
{
    queue<int>q;
    q.push(src);

    visited[src]=1;
    level[src]=0;
    while(!q.empty())
    {
        int u=q.front();

        for(int i=0; i<g[u].size(); i++)
        {
            int v=g[u][i];
            if(!visited[v])
            {
                level[v]=level[v]+1;
                parent[v]=u;
                visited[v]=1;
                q.push(v);
            }
        }q.pop();
    }
    cout<<" "<<src<<" to "<<n<<": "<<level[n]<<endl;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,p=1;
    while(cin>>n);
    {
        for(int j=0; j<n; j++)
        {
            int y;
            scanf("%d",&y);
            g[1].push_back(y);
            g[y].push_back(1);
        }
        for(int i=2; i<=19; i++)
        {
            int x;
            scanf("%d",&x);
            for(int j=0; j<x; j++)
            {
                int y;
                scanf("%d",&y);
                g[i].push_back(y);
                g[y].push_back(i);
            }
        }
       // cout<<"--------------"<<endl;
        int y,k=1;
        cin>>y;
            cout<<"Test Set #"<<k++<<endl;
            for(int j=0; j<y; j++)
            {
                int m,n;
                cin>>m>>n;
                bfs(m,n);
            }
            cout<<endl;
        for(int i=0; i<20; i++)
        {
            g[i].clear();
        }
    }
    return 0;
}

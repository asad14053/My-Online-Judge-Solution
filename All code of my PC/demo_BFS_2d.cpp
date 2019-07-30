#include<bits/stdc++.h>
using namespace std;
#define max 1003
int g[max][max],level[max][max];
bool vis[max][max];
struct data
{
    int i,j;
    data(int x,int y)
    {
        i=x,j=y;
    }
};
void bfs(data tx,data ty)
{

}
int main()
{
    int m,n;
    while(cin>>m>>n,m,n)
    {
        memset(g,0,sizeof(g));
        memset(level,0,sizeof(level));
        memset(vis,0,sizeof(vis));
        int t,x,y,z;
        cin>>t;
        while(t--)
        {
            cin>>x>>z;
            while(z--)
            {
                cin>>y;
                vis[x][y]=1;
            }
        }
    }
    int sx,sy,dx,dy;
    cin>>sx>>sy>>dx>>dy;
    data ts,ty;
    ts.i=sx,ts.j=sy,ty.i=dx,ty.j=dy;

    bfs(ts,ty);
    cout<<vis[dx][dy]<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf (1<<28)
#define mx 105

int e[mx][mx];

void get_inf()
{
    for(int i=1;i<=mx;i++)
    {
        for(int j=1;j<=mx;j++)
        {
            e[i][j]=(i==j)?0:inf;
        }
    }
}
void floyd(int n)
{
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                e[i][j]=min(e[i][j],e[i][k]+e[k][j]);
            }
        }
    }
}
int main()
{
    int t,n,p,cs=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        get_inf();

        while(p--)
        {
            int u,v,w;
            cin>>u>>v>>w;
            e[u][v]=min(e[u][v],w);
            e[v][u]=min(e[v][u],w);
        }
        floyd(n);
        if(e[1][n]>=inf) cout<<"Case "<<++cs<<": Impossible"<<endl;
        else cout<<"Case "<<++cs<<": "<<e[1][n]<<endl;
    }
    //cout<<inf<<endl;
    return 0;
}

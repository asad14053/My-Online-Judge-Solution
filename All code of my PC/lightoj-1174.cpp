#include<bits/stdc++.h>
using namespace std;
int n,m; int g[109][109];
int main()
{
    int t,co=1;
    cin>>t;
    while(t--)
    {

        memset(g,0,sizeof(g));
        cin>>n>>m;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                if(i==j)
                    g[i][j]=0;
                else g[i][j]=500000;
            }
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            g[x][y]=1;
            g[y][x]=1;
        }
        for(int k=0; k<n; k++)
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(g[i][j]>(g[i][k]+g[k][j]))
                    g[i][j]=g[i][k]+g[k][j];
        int m,n;
        cin>>m>>n;
        int mx=0;
       // floyd();
       /* for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<<g[i][j]<<" ";
                cout<<endl;
        }*/

        for(int i=0; i<=n; i++)
            mx=max(mx,g[m][i]+g[i][n]);
        cout<<"Case "<<co++<<": "<<mx<<endl;

    }
    return 0;
}

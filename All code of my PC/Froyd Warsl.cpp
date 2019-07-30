#include<bits/stdc++.h>
using namespace std;
int cst[1005][1005];
void warsal(int n)
{
    int i,j,k;
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cst[i][j] = min(cst[i][j],cst[i][k]+cst[k][j]);
            }
        }
    }
}
int main()
{
    int n,i,j,p,q,w,u,v,m;
    while(cin>>n>>m)
    {
        for(i=0; i<=200; i++) for(j=0; j<=100; j++)
            {
                if(i==j) cst[i][j]=0;
                else cst[i][j]=99999999;
            }
        while(m--)
        {
            cin>>u>>v>>w;
            cst[u][v] = min(w,cst[u][v]);
            cst[v][u] = min(w,cst[v][u]);
        }
        warsal(n);
        for(i=1;i<=n;i++)
        {
            cout<<"Shortest Path from "<<i<<endl;
            for(j=1;j<=n;j++) cout<<cst[i][j]<<" "; cout<<endl;
        }
    }
    return 0;
}

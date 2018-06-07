#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int V[MAX][MAX];
int  knepseck(int v[],int w[],int n,int W)
{
    int i,j;
    for(i=0; i<=W; i++)
    {
        V[0][i]=0;
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<=W; j++)
        {
            if(w[i]<=j)
            {
                int p= V[i-1][j];
                int q=v[i]+V[i-1][j-w[i]];
                if(p>q)
                    V[i][j]=p;
                else
                    V[i][j]=q;
            }
            else
                V[i][j]=V[i-1][j];
        }
    }
    return V[n][W] ;
}
int main()
{
    int n,v[MAX],w[MAX],W,test,people,m;
    scanf("%d",&test);
    while(test--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>v[i]>>w[i];
        W=0;
        cin>>people;
        for(int i=1; i<=people; i++)
        {
            cin>>m;
            W+=knepseck(v,w,n,m);
        }
        cout<<W<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int cost[100][100];

void floyd(int n)
{
    for(int i=1; i<=n; i++)
        cost[i][i]=0;
    for(int k=1; k<=n; k++)
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                if(cost[i][k]+cost[k][j]<cost[i][j])
                    cost[i][j]=cost[i][k]+cost[k][j];
}
int main()
{
    int n,e,x,y,a,b,w;
    while(cin>>n>>e)
    {
        memset(cost,INT_MAX,sizeof(cost));
        for(int i=0; i<e; i++)
        {
            cin>>x>>y>>w;
            cost[x][y]=w;
        }
        floyd(n);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
                cout<<cost[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
/*
3 6
1 2 4
1 3 11
2 1 6
2 3 2
3 1 3
3 2 999

0 4 6
5 0 2
3 7 0
*/

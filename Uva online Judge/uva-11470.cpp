#include<bits/stdc++.h>
using namespace std;
#define MAX 11
int mat[MAX][MAX],color[MAX][MAX];
int main()
{
    int n,i,j,sum,cas=0,m;
    while(cin>>m&&m)
    {
        cas++;
        n=m;
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                cin>>mat[i][j];
        printf("Case %d:",cas);
        sum =0;
        for(i=1; i<=n; i++)
        {
            sum=0;
            for(j=i; j<=n; j++)
            {
                if(color[j][n]==0)
                {
                    sum+=mat[j][n];
                    color[j][n]=1;
                }
                if(color[j][i]==0)
                {
                    sum+=mat[j][i];
                    color[j][i]=1;
                }
                if(color[i][j]==0)
                {
                    sum+= mat[i][j];
                    color[i][j]=1;
                }
                if(color[n][j]==0)
                {
                    sum+=mat[n][j];
                    color[n][j]=1;
                }
            }
            printf(" %d",sum);
            if(i==n)
                break;

            n--;
        }
        printf("\n");
        memset(color,0,sizeof(color));

    }

}

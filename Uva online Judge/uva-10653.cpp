#include<bits/stdc++.h>
#define  max 1001
using namespace std;
int mat[max][max];
int m,n,count=0;
int color[max][max],cost[max][max];
int X[4] = {-1,0,0,1};
int Y[4] = {0,-1,1,0};
void bfs(int x,int y)
{
    int ux,uy,vx,vy,k;
    queue<int>Q;
    Q.push(x);
    Q.push(y);
    color[x][y] = 1;
    cost[x][y]=0;
    int r=0;
    while(!Q.empty())
    {
        ux = Q.front();
        Q.pop();
        uy = Q.front();

        Q.pop();

        for(k=0; k<4; k++)
        {
            vx = ux+X[k];
            vy = uy+Y[k];

            if((vx>=0&&vx<=m) && (vy>=0&&vy<=n)&& mat[vx][vy]==0)
            {
                if(!color[vx][vy] && !cost[vx][vy])
                {
                    color[vx][vy]=1;

                    Q.push(vx);
                     Q.push(vy);

                    cost[vx][vy]=cost[ux][uy]+1;

                }
            }
         }
    }

}
int main()
{
    int i,j,k,row,r,data,b,s,s1,e,e1;
    while(scanf("%d %d",&m,&n)&&m&&n)
    {
        memset(color,0,sizeof(color));
        memset(cost,0,sizeof(cost));
        memset(mat,0,sizeof(mat));
        scanf("%d",&row);
        for(i=0;i<row;i++)
        {
          scanf("%d %d",&r,&data);
          for(j=1;j<=data;j++)
          {
              scanf("%d",&b);
              mat[r][b]=1;
          }
        }
        scanf("%d %d",&s,&s1);
        bfs(s,s1);
        scanf("%d %d",&e,&e1);
        printf("%d\n",cost[e][e1]);


    }
    return 0;
}

#include<bits/stdc++.h>
#define  mx 1001
using namespace std;
int mat[mx][mx]; /// -1 means obstacle
int vis[mx][mx],dis[mx][mx];
int m,n;
int X[4] = {-1,0,0,1};
int Y[4] = {0,-1,1,0};
void bfs(int x,int y)
{
    int ux,uy,vx,vy,k;
    queue<int>Q;
    Q.push(x);
    Q.push(y);
    vis[x][y] = true;
    dis[x][y]=0;
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
            if((vx>=0&&vx<m) and (vy>=0&&vy<n) and mat[vx][vy]!=-1 and vis[vx][vy]==false)
            {
                vis[vx][vy]=true;
                Q.push(vx);
                Q.push(vy);
                dis[vx][vy]=dis[ux][uy]+1;
            }
        }
    }
}
int main()
{
    int i,j,k,row,r,data,b,s,s1,e,e1;
    while(cin>>m>>n)
    {
        memset(vis,0,sizeof(vis));
        memset(dis,0,sizeof(dis));
        memset(mat,0,sizeof(mat));
        for(i=0; i<m; i++)
        {
            cin>>r>>data;
            for(j=0; j<data; j++)
            {
                cin>>b;
                mat[r][b]=-1;
            }
        }
        cin>>s>>s1;
        bfs(s,s1);
        cin>>e>>e1;
        cout<<dis[e][e1]<<endl;
    }
    return 0;
}

/*

10 10
0 1 2
1 1 2
2 2 2 9
3 2 1 7
4 0
5 3 3 6 9
6 4 0 1 2 7
7 3 0 3 8
8 2 7 9
9 3 2 3 4
0 0
9 9

18
*/

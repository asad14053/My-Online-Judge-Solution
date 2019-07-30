 #include<bits/stdc++.h>
#define pii pair<int,int>
#define uu first
#define vv second
using namespace std;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int w[1000][1000];
int d[1000][1000];
int row=4,col=4;
void bfs(int x,int y)
{
    memset(d,63,sizeof(d));
    d[x][y]=0;
    queue<pii>q;
    q.push(pii(x,y));
    while(!q.empty())
    {

        pii top=q.front(); q.pop();


       for(int i=0; i<4; i++)
        {
            int tx=top.uu+fx[i];
            int ty=top.vv+fy[i];
            if(tx>=0 and tx<row and ty>=0 and ty<col and w[tx][ty]==-1 and d[top.uu][top.vv]+1<d[tx][ty])
            {
                d[tx][ty]=d[top.uu][top.vv]+1;
                q.push(pii(tx,ty));
            }
        }
    }
}
int main(){

    return 0;
}

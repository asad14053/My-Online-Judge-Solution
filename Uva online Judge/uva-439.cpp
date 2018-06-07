#include<bits/stdc++.h>
#define pii pair<int,int>
#define uu first
#define vv second
using namespace std;
int d[10][10];
int row=8,col=8;
int fx[] = { -1, -1, 1, 1, -2, -2, 2, 2 };
int fy[] = { 2, -2, 2, -2, 1, -1, 1, -1 };
void bfs(int x,int y)
{
    memset(d,0x7f7f7f7f,sizeof(d));
    d[x][y]=0;
    queue<pii>q;
    q.push(pii(x,y));
    while(!q.empty())
    {

        pii top=q.front();
        q.pop();


        for(int i=0; i<8; i++)
        {
            int tx=top.uu+fx[i];
            int ty=top.vv+fy[i];
            if(tx>=0 and tx<row and ty>=0 and ty<col and d[top.uu][top.vv]+1<d[tx][ty])
            {
                d[tx][ty]=d[top.uu][top.vv]+1;
                //   cout<<d[tx][ty]<<endl;
                q.push(pii(tx,ty));
            }
        }
    }
}


int main()
{
    int sy,ey;
    int sx,ex;

    char a,b;
    while(cin>>a>>sy>>b>>ey)
    {
        sx = a - 'a';
        sy--;
        ex = b - 'a';
        ey--;

        bfs(sx,sy);
        printf("To get from %c%d to %c%d takes %d knight moves.\n", a, sy + 1, b, ey + 1, d[ex][ey]);
    }
    return 0;
}


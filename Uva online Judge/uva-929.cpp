#include<bits/stdc++.h>
#define sz 1003

using namespace std;
struct node
{
    int x,y,c;

    node(int d,int e,int f)
    {
        x=d;
        y=e;
        c=f;
    }
    bool operator<(const node &p)const
    {
        return c>p.c;
    }


};
int dist[sz][sz];
int ans[sz][sz];
bool flag[sz][sz];
int m,n;
int xx[]= {0,0,1,-1};
int yy[]= {1,-1,0,0};
priority_queue<node>q;

void dijkstra()
{
    memset(flag, 0,sizeof flag);
    memset(ans,  63,sizeof ans);
    while(!q.empty())
        q.pop();
    q.push(node(1,1,dist[1][1]));
    ans[1][1]=dist[1][1];
    while(!q.empty())
    {
        node top=q.top();
        q.pop();
        int x=top.x;
        int y=top.y;
        //  int c=top.c;
        //   printf("%d %d %d\n",x,y,c);
        if(flag[x][y])continue;
        flag[x][y]=1;
        for(int k=0; k<4; k++)
        {
            int x1=x+xx[k];
            int y1=y+yy[k];
            if(x1<1 || x1>m || y1<1 || y1>n)
                continue;
            if(flag[x1][y1])continue;
            int c1=dist[x1][y1];
            if(ans[x1][y1]>ans[x][y]+c1)
            {
                c1=ans[x][y]+c1;
                ans[x1][y1]=c1;
                q.push(node(x1,y1,c1));
            }
        }
    }
    return;
}
int main()
{

//   freopen("in.txt","r",stdin);
    int tt,i,j,l,c;
    cin>>tt;
    while(tt--)
    {
        cin>>m>>n;
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin>>c;
                dist[i][j]=c;
            }
        }
        dijkstra();
        cout<<ans[m][n]<<endl;
    }
    return 0;

}


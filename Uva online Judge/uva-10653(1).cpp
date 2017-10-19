#include<stdio.h>
#include<queue>
#include<cstring>
using namespace std;
struct data
{
    int i,j;
    data(int a,int b)
    {
        i=a;
        j=b;
    }
};
int xx[]= {0,0,-1,1};
int yy[]= {1,-1,0,0};
bool flag[1003][1003];
int dist[1003][1003];
int main()
{
   // freopen("in.txt","r",stdin);
    int r,c,j,l,i,num,rr,n,sx,sy,fx,fy;

    while(scanf("%d %d",&r,&c)==2)
    {
        if(!r && !c)
            break;
        memset(flag,0,sizeof flag);
        scanf("%d",&num);
        for(i=1; i<=num; i++)
        {
            scanf("%d %d",&rr,&n);
            for(j=1; j<=n; j++)
            {
                scanf("%d",&l);
                flag[rr][l]=1;
            }
        }
        queue<data>qq;
        scanf("%d %d",&sx,&sy);
        qq.push(data(sx,sy));
        flag[sx][sy]=1;
        dist[sx][sy]=0;
        scanf("%d %d",&fx,&fy);
        int f1=0;
        while(!qq.empty())
        {
            data tmp=qq.front();
            int x,y;
            x=tmp.i;
            y=tmp.j;
            for(i=0; i<4; i++)
            {
                int mm,nn;
                mm=x+xx[i];
                nn=y+yy[i];
                if(mm>=0 && mm<r && nn>=0 && nn<c && !flag[mm][nn])
                {
                    qq.push(data(mm,nn));
                    flag[mm][nn]=1;
                    dist[mm][nn]=dist[x][y]+1;
                    if(mm==fx && nn==fy)
                    {
                        f1=1;
                        break;
                    }

                }
            }
            if(f1==1)break;
            qq.pop();
        }
        printf("%d\n",dist[fx][fy]);
    }
    return 0;
}N

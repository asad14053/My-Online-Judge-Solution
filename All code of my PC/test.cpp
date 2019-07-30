








                cost[x][y]=cost[pii.first][pii.second]+1;
                Q.push(make_pair(x,y));
                visit[x][y]=true;
            cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<cost[pii.first][pii.second]<<" knight moves.\n";
            if(x>=1 && x<=8 && y>=1 && y<=8 && !visit[x][y])
            int x=pii.first+Dx[k];
            int y=pii.second+Dy[k];
            {
            }
        bfs(sx,sy-1,dx,dy-1);
        dx=s2[0]-96;
        dy=s2[1]-'0';
        for(int k=0; k<8; k++)
        if(pii.first==dx && pii.second==dy)
        pii=Q.front();
        Q.pop();
        return ;
        sx=s1[0]-96;
        sy=s1[1]-'0';
        {
        }
    cost[sx][sy]=0;
    int dx,dy,sx,sy;
    memset(visit,0x7f7f7f7f,sizeof(visit));
    pair<int, int>pii;
    pii.first=sx;
    pii.second=sy;
    Q.push(pii);
    queue< pair<int,int> >Q;
    return 0;
    visit[sx][sy]=true;
    while(!Q.empty())
    while(cin>>s1>>s2)
    {
    {
    }
    }
#include<bits/stdc++.h>
bool visit[10][10];
int cost[10][10];
int Dx[]= {-2,-1, 1, 2, 2,1,-1,-2};
int Dy[]= {-1,-2,-2,-1, 1,2, 2, 1};
int main()
string s1,s2;
using namespace std;
void bfs(int sx,int sy,int dx,int dy)
{
{
}
}
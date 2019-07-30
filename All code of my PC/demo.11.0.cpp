#include <bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int color[1000];
bool bfs(int s)
{
    queue<int>q;
    color[s]=0;
    q.push(s);
    while(!q.empty())
    {
        int u =q.front();
        for(i=0; i<g[u].size(); i++)
        {
            if(color[v[u][i]]==-1)
            {
                color[v[u][i]]=(color[x]==0)?1:0;
                q.push(v[u][i]);
            }
            else
            {
                if(color[v[u][i]]==color[x])
                    return false;
            }
        }
        q.pop();
    }
    return false;
}
int main()
{
    int t,i,l,x,p,e,d,y;
    bool b;
    cin>>t;
    while(t--)
    {
        memset(color,-1,sizeof(color));
        cin>>d;
        for(i=0; i<d; i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }


        if(bfs(0)==true)
            cout<<"BICOLORABLE."<<endl;
        else
            cout<<"NOT BICOLORABLE."<<endl;
    }
    return 0;
}

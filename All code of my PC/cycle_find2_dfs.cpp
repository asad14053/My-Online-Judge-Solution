#include<bits/stdc++.h>
using namespace std;
//white = 0, gray=1, black=2
int col[100]={0};
vector<int> g[100];

int cycle(int u)
{
    col[u]= 1;
    bool cl=true;
    for(int i=0;i<g[u].size();i++)
    {
        int v=g[u][i];
        if(col[v]==0)
        cl=cycle(g[u][i]);
        else if (col[v]==1)
            return false;
    }
    col[u]=2;
    return cl;
}
int main()
{

    int x,y,z,a,b,e,n;

    while(cin>>n>>e)
    {
        for(int i=0; i<e; i++)
        {
            cin>>x>>y;
            g[x].push_back(y);
        }
        bool f=cycle(1);
        if(!f)
            cout<<"cycle found"<<endl;
        else cout<<"no cycle found"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
vector<int>g[100];
int ind[100];
vector<int> topsort(int n)
{
    queue<int>q;
    vector<int>res;
    for(int i=1;i<=n;i++)
        if(ind[i]==0)
        q.push(i);
    while(!q.empty())
    {
        int u=q.front();
        res.push_back(u);
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(ind[v]>0)
            {
                ind[v]--;
                if(ind[v]==0)
                    q.push(v);
            }
        }
        q.pop();
    }
    return res;
}
int main()
{
    int n,e,a,b,c,d,x,y;
    while(cin>>n>>e)
    {
        for(int i=0; i<e; i++)
        {
            cin>>x>>y;
            g[x].push_back(y);
            ind[y]++;
        }
        vector<int> p = topsort(n);
        for(int i=0;i<n;i++)
            cout<<p[i]<<endl;
    }
    return 0;
}

/*
6 8
1 2
3 2
2 4
2 6
2 5
4 6
4 5
6 5

1
3
2
4
6
5
*/


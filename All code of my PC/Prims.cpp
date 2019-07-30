#include<bits/stdc++.h>
using namespace std;
vector<int>v[100],cst[100];
void prims(int sc, int n)
{
    int vis[100]={0},i,j,mst[100],t=0,u,vv,uu,mn,sm=0;
    vis[sc] = 1;
    mst[t++] = sc;
    while(n--)
    {
        mn = 1999999;
        for(i=0;i<t;i++)
        {
            u = mst[i];
            for(j=0;j<v[u].size();j++)
            {
                if(cst[u][j]<mn&&vis[v[u][j]]==0)
                {
                    mn = cst[u][j];
                    uu = v[u][j];
                }
            }
        }
        vis[uu] = 1;
        mst[t++] = uu;
        sm+=mn;
    }
    cout<<"MST = "<<sm<<endl;
}
int main()
{
    int node,edge,i,j,p,q,ct;
    while(cin>>node>>edge)
    {
        for(i=1;i<=100;i++)
        {
            v[i].clear();
            cst[i].clear();
        }
        while(edge--)
        {
            cin>>p>>q>>ct;
            v[p].push_back(q);
            v[q].push_back(p);
            cst[p].push_back(ct);
            cst[q].push_back(ct);
        }
        prims(1,node-1);
    }
    return 0;
}

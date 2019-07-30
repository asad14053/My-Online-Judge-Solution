#include<bits/stdc++.h>
using namespace std;
struct node
{
    int u,v,w;
    bool operator<(const node &p) const
    {
        return p.w>w;
    }
};
vector<node>ve;
int pr[1000];
int find(int r)
{
   if(pr[r]==r) return r;
   else return pr[r]=find(pr[r]);
}
int mst(int n)
{
    sort(ve.begin(),ve.end());
    for(int i=0;i<=n;i++)
        pr[i]=i;
        int c=0,sm=0;
        for(int i=0;i<ve.size();i++)
        {
            int u=find(ve[i].u);
             int v=find(ve[i].v);
             if(u!=v)
             {
                 pr[u]=v;c++;
                 sm+=ve[i].w;
                 if(c==n-1) break;
             }
        }
        return sm;
}
int main()
{
    int n,m;
    node g;
    while(cin>>n>>m)
    {
        ve.clear();
        for(int i=0;i<n;i++)
        {
            cin>>g.u>>g.v>>g.w;
            ve.push_back(g);
        }
    }
    cout<<mst(n)<<endl;
}


/*
5 8
1 2 2
1 5 3
1 4 2
2 5 6
2 3 1
3 5  9
3 4 12
4 5 10

4 5
1 2 1
2 3 2
1 3 3
2 4 1
3 4 9

*/

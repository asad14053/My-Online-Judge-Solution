#include<bits/stdc++.h>
using namespace std;
#define MAXN 200009
struct edge
{
    int u,v,w;
    bool operator < ( const edge& p ) const
    {
        return w < p.w;
    }
}in[MAXN];
int pr[MAXN];
vector<edge>e;
int find(int r)
{
    if(pr[r]==r) return r;
    else return pr[r] = find(pr[r]);
}
int mst(int n, int m)
{
    //sort(e.begin(),e.end());
    /*for(int i=0;i<m;i++)
    {
        cout<<in[i].u<<" "<<in[i].v<<" "<<in[i].w<<endl;
    }*/
    for(int i=0; i<=n; i++)pr[i]=i;

    int count=0,s=0;
    for(int i=0; i<m; i++)
    {
        int u=find(in[i].u);
        int v=find(in[i].v);
        if(u!=v)
        {
            pr[u]=v;
            count++;
            s+=in[i].w;
            if(count==n-1) break;
        }
    }
    return s;
}

int main()
{
    int n,m;
    while(cin>>n>>m,n,m)
    {
        int mm=0;
        for(int i=0; i<m; i++)
        {
            int u,v,w;
            edge get;
            cin>>in[i].u>>in[i].v>>in[i].w;
            mm+=in[i].w;
        }
        sort(in,in+m);
        //cout<<mm<<" "<<mst(n,m)<<endl;
        cout<<mst(n,m)<<endl;
    }
    return 0;

}

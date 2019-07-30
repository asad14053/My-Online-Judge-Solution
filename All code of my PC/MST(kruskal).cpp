#include<bits/stdc++.h>
using namespace std;
#define MAXN 200005
struct edge
{
    int u,v,w;
    bool operator < ( const edge& p ) const
    {
        return w <p.w;
    }
};
int pr[MAXN];
vector<edge>e;
int find(int r)
{
    if(pr[r]==r) return r;
    else return pr[r] = find(pr[r]);
}
int mst(int n)
{
    sort(e.begin(),e.end());
    for(int i=0; i<=n; i++)pr[i]=i;

    int count=0,s=0;
    for(int i=0; i<(int)e.size(); i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            pr[u]=v;
            count++;
            s+=e[i].w;
            if(count==n-1) break;
        }
    }
    return s;
}

int main()
{
//	READ("in");
    int n,m;
    while(cin>>n>>m)
    {
        e.clear();
        for(int i=1; i<=m; i++)
        {
            int u,v,w;
            edge get;
            cin>>get.u>>get.v>>get.w;
            e.push_back(get);
        }
        cout<<mst(n)<<endl;
    }
    return 0;

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


ans =8
*/

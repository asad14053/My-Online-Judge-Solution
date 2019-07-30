#include<bits/stdc++.h>
using namespace std;
#define MAXN 200005
int pr[MAXN];
int sz;
struct edge
{
    int u,v,w;
    bool operator <(const edge&p)const
    {
    return w<p.w;
    }
};
vector<edge>e;
int find(int r)
{
    if(r==pr[r]) return r;
    return pr[r]=find(pr[r]);
}
int maxmst(int n)
{
    sort(e.begin(),e.end());
    for(int i=0;i<=n;i++)
        pr[i]=i;
        int s=0,c=0;
    for(int i=e.size()-1;i<sz and i>=0;i--)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            pr[u]=v;
            c++;
            s+=e[i].w;
            if(c==n)
                break;
        }
    }
    return s;
}
int minmst(int n)
{
    //int p[n+3];
    sort(e.begin(),e.end());
    for(int i=0;i<=n;i++)
        pr[i]=i;
        int c=0,s=0;
    for(int i=0;i<e.size()and i<sz;i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
        pr[u]=v;
        c++;
        s+=e[i].w;
        if(c==n)break;
        }
    }
    return s;
}
int main()
{
    int t,co=1;
    cin>>t;
    while(t--)
    {  //if(t!=1)
         //cout<<endl;
        int n;
        cin>>n;
        sz=0;
        edge g;
        e.clear();
        while(cin>>g.u>>g.v>>g.w && g.w)
           {
               e.push_back(g);
               sz++;
           }
          // cout<<minmst(n)<<" "<<maxmst(n)<<endl;
        int m=minmst(n)+maxmst(n);
       // cout<<m<<endl;
        if(m&1)
        cout<<"Case "<<co++<<": "<<m<<"/2"<<endl;
        else cout<<"Case "<<co++<<": "<<(m>>1)<<endl;
    }
    return 0;
}

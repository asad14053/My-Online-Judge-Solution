#include<bits/stdc++.h>
using namespace std;
struct edge
{
    int u,v,w;
    bool operator<(const edge&p)const
    {
        return w<p.w;
    }
};
vector<edge>e;
int pr[210];
int n,m;
int find(int r)
{
    if(r==pr[r])
        return r;
    else return pr[r]=find(pr[r]);
}
int mst()
{
    sort(e.begin(),e.end());

    int s=0,c=0;
    vector<edge>t;
    for(int i=0; i<e.size(); i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            pr[u]=v;
            c++;
            s+=e[i].w;
           t.push_back(e[i]);
            if(c==n-1)
                break;
        }
    }
    e.clear();
   e=t;
    if(c==n-1)
        return s;
    else return -1;

}

int main()
{
    int t,co=1;
    scanf("%d",&t);
    while(t--)
    {

        edge g;
        e.clear();
        int k=0;
        scanf("%d%d",&n,&m);
        cout<<"Case "<<co++<<":"<<endl;
        while(m--)
        {
            cin>>g.u>>g.v>>g.w;
            e.push_back(g);
            for(int i=0; i<=n; i++)
                pr[i]=i;
            printf("%d\n",mst());
        }

    }

}

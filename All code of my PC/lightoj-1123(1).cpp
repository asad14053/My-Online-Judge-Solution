#include<bits/stdc++.h>
using namespace std;

struct data
{
    int u,v,w;
    bool operator< (const data& p)const
    {
        return w<p.w;
    }
    data(int x,int y, int z)
    {
        u=x,v=y,w=z;
    }
};

vector<data>edge;
int n,m,cnt=0;
int par[210];

int find(int n)
{
    return par[n]=(par[n]==n)?n:find(par[n]);
}

int mst()
{
    int cnt=0,sum=0;
    sort(edge.begin(),edge.end());
    vector<data>temp;
    for(int i=0; i<edge.size(); i++)
    {
        int u=find(edge[i].u);
        int v=find(edge[i].v);
        if(u!=v)
        {
            cnt++;
            par[u]=v;
            sum+=edge[i].w;
            temp.push_back(edge[i]);
            if(cnt==n-1)
            break;
        }
    }
    edge.clear();
    edge=temp;
    if(cnt==n-1) return sum;
    return -1;
}

int main()
{
    int t;
    cin>>t;
    int co=1;
    while(t--)
    {
       cin>>n>>m;
         cout<<"Case "<<co++<<":"<<endl;
        while(m--)
        {
            int x,y,z;
            cin>>x>>y>>z;
            edge.push_back(data(x,y,z));
            for(int i=0;i<=n;i++)
            par[i]=i;
            printf("%d\n",mst());
        }
        edge.clear();
    }
    return 0;
}

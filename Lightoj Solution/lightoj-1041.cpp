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

int pr[100000];
int cm=0;
int find(int r)
{
    if(pr[r]==r)
        return r;
    else return pr[r]=find(pr[r]);
}
int mst(int n)
{
    sort(e.begin(),e.end());
    for(int i=0; i<=n; i++)
        pr[i]=i;
    int s=0;
    cm=0;
    for(int i=0; i<(int)e.size(); i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            pr[u]=v;
            cm++;
            s+=e[i].w;
            if(cm==n-1) break;
        }
    }
    // cout<<cm<<endl;
    return s;
}
int main()
{
    int t;
    cin>>t;
    edge g;
    int co=1;
    while(t--)
    {
        map<string ,int>mp;
        int n;
        string a,b;
        cin>>n;
        int i=1;
        int m=n;
        e.clear();
        while(n--)
        {
            cin>>a>>b>>g.w;
            if(!mp[a])
                mp[a]=i++;
            if(!mp[b])
                mp[b]=i++;
            g.u=mp[a];
            g.v=mp[b];
            e.push_back(g);
        }
        i=i-1;
//for(int j=0; j<e.size(); j++)
        // cout<<e[j].u<<" "<<e[j].v<<" "<<e[j].w<<endl;
        int moi=mst(i);
        //   cout<<cm<<" "<<i<<endl;

        if(cm!=i-1)
            cout<<"Case "<<co++<<": "<<"Impossible"<<endl;
        else
            cout<<"Case "<<co++<<": "<<moi<<endl;
    }

}

/*
2

12
Dhaka Sylhet 0
Ctg Dhaka 0
Sylhet Chandpur 9
Ctg Barisal 9
Ctg Rajshahi 9
Dhaka Sylhet 9
Ctg Rajshahi 3
Sylhet Chandpur 5
Khulna Rangpur 7
Chandpur Rangpur 7
Dhaka Rajshahi 6
Dhaka Rajshahi 7

2
Rajshahi Khulna 4
Kushtia Bhola 1


ans =31
ans=impossible
*/

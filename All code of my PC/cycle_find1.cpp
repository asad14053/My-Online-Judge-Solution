#include<bits/stdc++.h>
using namespace std;
int p[100];
int find(int r)
{
    if(p[r]==r) return r;
    else return p[r]=find(p[r]);
}
int join (int x, int y)
{
    int u=find(x);
    int v=find(y);
    if(u!=v)
        p[v]=u;
    else return false;
    return true;

}
int main()
{
    int n,e,x,y,a,b,w;
    while(cin>>n>>e)
    {
        for(int i=0; i<=n; i++) // set default representative
            p[i]=i;
        bool f=1;
        for(int i=0; i<e; i++)
        {
            cin>>x>>y;
            f&=join(x,y);
        }
        if(!f)
            cout<<"cycle detected"<<endl;
        else cout<<"no cycle"<<endl;

    }
    return 0;
}


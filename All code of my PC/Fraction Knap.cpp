#include<bits/stdc++.h>
using namespace std;
struct info
{
    double wt,tt,w;
    int pos;
} in[10000];
bool cmp(info a, info b)
{
    return a.wt>b.wt;
}
int main()
{
    double sm,cap,w,p,am[1000];
    int i,j,n;
    while(cin>>cap)
    {
        memset(am,0,sizeof(am));
        sm=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>w>>p;
            in[i].wt = p/w; in[i].pos = i;
            in[i].tt = p;   in[i].w = w;
        }
        sort(in,in+n,cmp);
        for(i=0; i<n; i++)
        {
            if(in[i].w>cap) break;
            else
            {
                sm+=in[i].tt;
                cap-=in[i].w;
                am[in[i].pos]=1;
            }
        }
        if(i<n)
        {
            sm+=cap*in[i].wt;
            am[in[i].pos] = cap/in[i].w;
        }
        for(i=0;i<n;i++) cout<<am[i]<<" "; cout<<endl;
        cout<<"Total Profit : "<<sm<<endl;
    }
    return 0;
}

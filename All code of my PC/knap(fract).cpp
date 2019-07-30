#include<bits/stdc++.h>
using namespace std;
struct node
{
    double wt,pt,x;
    int pos;

} in[1000];
bool cmp(node a,node b)
{
    return a.x>b.x;
}
int main()
{
    int n;
    while(cin>>n)
    {
        double a[100]={0};
        for(int i=0; i<n; i++)
        {
            double p,w;
            cin>>p>>w;
            in[i].pt=p;
            in[i].wt=w;
            in[i].pos=i;
            in[i].x=p/w;
        }
        double cap;
        cin>>cap;
        double sm=0;
        int i;
        sort(in,in+n,cmp);
        for(int i=0; i<n; i++)
            cout<<in[i].pt<<" "<<in[i].wt<<" "<<in[i].x<<endl;
        for( i=0; i<n; i++)
        {
            if(in[i].wt>cap)
                break;
            else
            {
                sm+=in[i].pt;
                cap-=in[i].wt;
                a[in[i].pos]=1;
            }
        }
        if(i<n)
        {
            sm+=cap*(in[i].x);
            a[in[i].pos]=(double)(cap/in[i].wt);
        }
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        cout<<sm<<endl;
    }
    return 0;
}

/*
3
25 18
24 15
15 10
20

*/

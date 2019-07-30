#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define fr(k,a,b)           for(int k=(a);k<(b);k++)
struct p
{
    ll p,at,bt;
};
ll cmp(p x,p y)
{
    if(x.at<y.at)
        return 1;
    else return 0;
}
int main()
{
    ll x,y,z,n,b,c;
    cout<<"number of process :"<<endl;
    cin>>n;
    p a[n+1];
    cout<<"process\tat\tbt"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"p"<<i+1<<" ";
        cin>>x>>y;
        a[i].p=i+1;
        a[i].at=x;
        a[i].bt=y;
    }
    sort(a,a+n,cmp);
    ll bt=0,mn=0,k=1;
    for(int j=0;j<n;j++)
    {
        bt+=a[j].bt;
        mn=a[k].bt;
        for(int i=k;i<n;i++)
        {
            if(bt>=a[i].at and a[i].bt<mn)
            {
                swap(a[k].at,a[i].at);
                swap(a[k].bt,a[i].bt);
                swap(a[k].p,a[i].p);
            }
        }
        k++;

    }
    ll sm=0,sm1=0;
    for(int i=0;i<n;i++)
    {
        cout<<"p"<<a[i].p<<"\t"<<a[i].at<<"\t"<<a[i].bt<<"\t"<<sm-a[i].at<<endl;
        if(i!=n-1)
        {
            sm+=(a[i].bt);
            sm1+=(sm-a[i+1].at);
        }
    }
    cout<<"average waiting time:"<<sm1/(double)n<<endl;
    return 0;
}
/*
5
2 5
3 13
0 8
5 4
1 10

*/

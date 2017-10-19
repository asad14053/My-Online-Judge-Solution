#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll ncr(ll n,ll m)
{
    ll res=1,i;
    if(n-m<m)
        m=n-m;
    for(i=1; i<=m; i++,n--)
    {
        res=res*n;
        res=res/i;
    }
    return res;
}

int main()
{
    ll n,r;
    while(cin>>n>>r)
    {
        if(n==0 and r==0)
            break;
        cout<<(int)floor(log10(ncr(n,r))+1)<<endl;
    }
    return 0;
}

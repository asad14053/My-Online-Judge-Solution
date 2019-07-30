#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,p,q;

    (cin>>n>>a>>b>>p>>q);
    {
        long long mx=0,a1=0,a2=0,ans = 0;
        ans += (n/a) * p;
        ans += (n/b) * q;
        if (p > q)
             ans += (n/(a*b)) * p;
             else
            ans += (n/(a*b)) * q;
           cout<<ans<<endl;

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    while(cin>>n>>k)
    {
        if(k>n)
        {
         cout<<"-1"<<endl;
         return 0;
        }
        ll a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n,greater<int>());
        cout<<a[k-1]<<" "<<0<<endl;
    }
    return 0;
}

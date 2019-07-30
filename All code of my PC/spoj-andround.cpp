#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define max 100000000
ll a[max];
int main( int argc, char const* argv[])
{
   // vector<ll>v;
    ll n,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            //v.push_back(a[i]);
        }
            ll m = 1;
        for(ll i=0;i<n;i++)
        {
          m = a[i]& m;
            cout<<m<<" ";
        }
        cout<<endl;
    }
    return 0;
}

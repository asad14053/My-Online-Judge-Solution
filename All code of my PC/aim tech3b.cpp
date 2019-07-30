#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,am;
    while(cin>>n>>am)
    {
        ll a[n+2],s=0;
        vector<pair<ll,ll> >v;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        ll x=0;s=0;
        for(int i=0;i<n;i++)
            {
                x=abs(am-a[i]);
                //am=a[i];
                v.push_back(make_pair(x,a[i]));
                //cout<<x<<endl;
            }
             sort(v.begin(),v.end());
            for(int i=0;i<n-1;i++)
                {
                    s+=abs(abs(v[i].second)-abs(am));
                    am=v[i].second;
                }
            cout<<s<<endl;
    }
    return 0;
}

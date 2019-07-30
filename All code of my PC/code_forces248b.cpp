#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<ll>v,v1,sum,sum1;
    ll x, n,k,a,b,c,s;
    while(cin>>n)
    {
        v.clear();
        v1.clear();
        sum.clear();
        sum1.clear();
        s=0;
        sum.push_back(s);
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            s+=x;
            v.push_back(x);
            sum.push_back(s);
        }
        v1=v;
        sort(v1.begin(),v1.end());
        s=0;
        sum1.push_back(s);
        for(ll i=0; i<n; i++)
        {
            s+=v1[i];
            sum1.push_back(s);
        }
        cin>>k;
        while(k--)
        {
            ll s=0;
            cin>>a>>b>>c;
            if(a==1)
                cout<<sum[c]-sum[b-1]<<endl;
            else
                cout<<sum1[c]-sum1[b-1]<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,s;
    vector<pair<double,ll> >v;
    while(cin>>n>>s)
    {
        v.clear();
        ll x,y,z;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y>>z;
            v.push_back(make_pair(sqrt(x*x+y*y),z));
        }
        sort(v.begin(),v.end());
        const int l=1000000;
        int i=0;
         double m=0.0;
         cout<<setprecision(12);
         z=s;
        while(i<n)
        {
            z+=v[i].second;
            if(z>=l)
            {
                printf("%.7f\n",v[i].first);
                break;
            }
            i++;
        }
        if(z<l)
        cout<<-1<<endl;
    }
    return 0;
}

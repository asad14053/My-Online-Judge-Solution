#include<bits/stdc++.h>
using namespace std;
typedef long ll;
int main()
{

    int n,x,m,t;
    while(cin>>n)
    {
        m=n;
        vector<ll>v;
        map<ll,ll>mp;
        while(n--)
        {
            cin>>x>>t;
            mp[x]++;
            v.push_back(t);
        }
        for(int i=0;i<m;i++)
            cout<<m+mp[v[i]]-1<<" "<<m-mp[v[i]]-1<<endl;
    }
    return 0;
}

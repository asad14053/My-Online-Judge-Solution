#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    while(cin>>n>>m)
    {
        if(n<2 or m<2 or m>n)
        {
            cout<<"Boring!"<<endl;
            continue;
        }
        vector<ll>v;
        v.push_back(n);
        while(n!=0 and n%m==0)
        {
            n/=m;
            v.push_back(n);
        }
        if(n==1)
        {
            cout<<v[0];
            for(int i=1; i<v.size(); i++)
                cout<<" "<<v[i];
            cout<<endl;
        }
        else cout<<"Boring!"<<endl;

    }
    return 0;
}

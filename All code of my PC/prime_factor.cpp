#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll n;
    while(cin>>n&&n)
    {
        ll b=n;
        vector<ll>fact;
        vector<int>pow;
        for(ll i=2;i*i<=n;i++)
        {
            int p=0;
            while(n%i==0)
            {
                ++p;
                n/=i;
            }
            if(p>1)
            {
                fact.push_back(i);
                pow.push_back(p);
            }
        }
        if(n>1)
        {
            fact.push_back(n);
            pow.push_back(1);
        }
        cout<<"1";
        for(int i=0,j=0;i<fact.size(),j<pow.size();++i,++j)
            cout<<" X "<<fact[i]<<"^"<<pow[j];
        cout<<endl;
    }
}

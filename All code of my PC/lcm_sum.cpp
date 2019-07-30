#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int gcd(ll a,ll b)
{
    return b?gcd(b,a%b):a;

}
int main()
{
    ll n,sum=0;
    while(cin>>n)
    {
    for(ll i=1;i<=n;i++)
    {
        sum+=(ll)(i*n)/gcd(i,n);
    }
     cout<<sum<<endl;
     sum=0;
    }
    return 0;
}

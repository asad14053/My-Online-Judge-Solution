#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int gcd(ll a,ll b)
{
    return b?gcd(b,a%b):a;

}
int main()
{
    ll a,b,lcm=0;
    while(cin>>a>>b)
    {
         cout<<(ll)(a*b)/gcd(a,b)<<endl;
    }

}

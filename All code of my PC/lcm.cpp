#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int gcd(ll a,ll b)
{
   return b?  gcd(b,a%b):a;

}
int main()
{
    ll a,b;
    while(cin>>a>>b)
    {
        cout<<(ll)(a*b)/gcd(a,b)<<endl;
    }
    return 0;
}

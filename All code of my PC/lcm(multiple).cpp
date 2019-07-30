#include<bits/stdc++.h>
using namespace std;
typedef unsigned  long long ll;
int gcd(ll a, ll b)
{
    return b?gcd(b,a%b):a;
}
int main(int argc, char const *argv[])
{
    ll n,lcm;
    ll a[100000];
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
        for(ll i=0;i<n-1;i++)
        {
            ll u=a[i];
            ll v=a[i+1];
           // cout<<u<<"  "<<v<<endl;
             lcm =(ll)(u*v)/gcd(u,v);
             a[i+1]=lcm;

        }cout<<(ll)lcm<<endl;
//        cout<<a[i+1]<<endl;
        //cout<<<<endl;

    return 0;
}

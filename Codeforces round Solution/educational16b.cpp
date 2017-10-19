#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x,k,mn=10000000000,j;
    cin>>n;
    ll a[n+2];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    if(n%2)
    cout<<a[n/2]<<endl;
    else cout<<a[n/2-1]<<endl;
    return 0;
}

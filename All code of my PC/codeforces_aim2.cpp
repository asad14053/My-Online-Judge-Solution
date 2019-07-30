#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x,s=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        s+=x;
    }
    cout<<s-1<<endl;
    return 0;
}

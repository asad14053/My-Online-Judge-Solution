#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,a,b;

    while(cin>>n,n)
    {
        a=sqrtl(n);
        b=a*a;
        (b==n)?cout<<"yes":cout<<"no";
        cout<<endl;
    }
    return 0;
}

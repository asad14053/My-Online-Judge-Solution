#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,a,m=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll b=0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            b=max(a,b);
        }
        cout<<"Case "<<m++<<": "<<b<<endl;

    }
    return 0;
}

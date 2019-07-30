#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x;
    while(cin>>n>>x)
    {
        ll a[n+2],s=0,l=0;
        for(int i=0; i<n; i++)
            cin>>a[i];
        int i;
        for( i=n; i>=1; i--)
        {
            for(int j=0; j<n; j++)
                s+=a[j]/i;
            if(s==x)
            {
                l=i;
                cout<<s<<endl;
                break;
            }
        }
        cout<<x*l<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b;
        int f=0;
        ll x[a+2];
        for(int i=0;i<a;i++)
            cin>>x[i];
            sort(x,x+a);
            ll s=0;
            for(int i=0;i<a;i++)
            {
                s+=x[i];
                if(s<b)
                    f++;
                else break;
            }
            cout<<f<<endl;
    }
    return 0;
}

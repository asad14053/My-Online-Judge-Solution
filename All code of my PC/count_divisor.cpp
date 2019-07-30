#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b;
    while(cin>>a>>b)
    {
        if(a>b) swap(a,b);
        ll md=0,mn=0;
        for(ll i=a;i<=b;i++)
        {
            int d=0;
            for(ll j=1;j<=sqrt(i);j++)
                if(i%j==0)
                d+=2;
            if(sqrt(i)==(int) sqrt(i))
                d--;
            if(d>md)
            {
                md=d;
                mn=i;
            }

        }
        cout<<a <<"---"<<b<<" "<<mn<<"---"<<md<<endl;
   }
    return 0;
}

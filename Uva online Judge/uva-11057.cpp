#include<bits/stdc++.h>
using namespace std;
typedef long ll;
#define mx 1000005
ll a[mx];
int main()
{
    ll t,m,b,c;
    while(cin>>t)
    {
        for(ll i=0; i<t; i++)
            cin>>a[i];
        sort(a,a+t);
        cin>>m;
        ll d=2000000;
        for(ll i=0; i<t; i++)
        {
            for(ll j=0; j<t; j++)
            {
                if(a[i]+a[j]==m and i!=j)
                {
                    if(a[i]>=a[j])
                        if((a[i]-a[j])<d)
                        {
                             b=a[j];
                             c=a[i];
                            d=a[i]-a[j];
                            //cout<<"   b"<<b<<"   c "<<c<<endl;
                        }
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<b<<" and "<<c<<"."<<endl<<endl;
    }
    return 0;
}



/*



2
40 40
80

5
10 2 6 8 4
10

*/

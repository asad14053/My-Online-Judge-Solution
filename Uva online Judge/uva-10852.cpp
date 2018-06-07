#include<bits/stdc++.h>
using namespace std;
typedef long ll;
#define mx 10007
bool a[mx+2];
int p()
{
    memset(a,true,sizeof(a));
    a[0]=a[1]=false;
    for(ll i=2; i<=sqrt(mx); i++)
        if(a[i])
            for(ll j=i*i; j<mx; j+=i)
                a[j]=false;
}
int main()
{
    p();
    ll t,m;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>m;
            for(ll i=2; i<(int)m; i++)
            {
                //cout<<
                if(a[i])
                    if(2*i>m)
                    {
                        cout<<i<<endl;
                        break;
                    }
            }
        }
    }
    return 0;
}


/*


5
4399
614
8201
101
7048

*/

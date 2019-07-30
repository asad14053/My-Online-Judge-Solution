#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n)
    {
    ll ans=0;
    int digits = 10;
    ll k=1000000000;
    while(k>0)
    {

        if((n-k+1)>0)
        {
            ans+=digits*(n-k+1);
            n = k-1;
        }

        k/=10;
        digits--;
    }
    cout<<ans<<endl;
    }
    return 0;
}

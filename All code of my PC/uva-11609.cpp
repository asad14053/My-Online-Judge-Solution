#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long dp(long long p)
{
    long long temp;
    if ( p == 1 ) return 2;
    if ( p % 2 == 0 )
    {
        temp = dp(p/2);
        return (temp * temp) % MOD;
    }
    else
        return (dp(p - 1)*2);
}
int main ()

{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        cout<<"Case #"<<i<<": ";
        if(n==1)
            cout<<"1"<<endl;
        else
            cout << (((dp(n - 1)%MOD) * (n % MOD)) % MOD) << endl;
    }
    return 0;
}

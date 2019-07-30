#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll M = 1e13 + 7 ;

int main()
{
    int test , cs ,  l , m , n ;
    cin>>test;
    for( cs = 1 ; cs <= test ; cs++ )
    {
        cin>>l>>m>>n;
        l *= l ;
        ll  ret = 0 , prev = 1   ;
        for( int i = 1 ; i <= m ; i++ )
        {
            prev *= ( l-i+1 );
            prev %= M ;
        }
        for( int i = m  ; i <= n  ; i++ )
        {
            ret += prev ;
            ret %= M ;
            prev = prev * ( l - i ) ;
            prev %= M;
        }
        printf("Case %d: %lld\n",cs,ret );
    }
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,k;
    while(cin>>n)
    {   // n--;
        ll i;
         for( i=1;i<=n;i++)
         n-=i;
         if(n==0)
            n=i-1;
         cout<<n<<endl;
    }
    return 0;
}

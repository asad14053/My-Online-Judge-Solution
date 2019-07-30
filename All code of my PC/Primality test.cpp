
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll bigmod(int a, unsigned int n, int p)
{
    int res = 1;
    a = a % p;

    while (n > 0)
    {

        if (n & 1)
            res = (res*a) % p;

        n = n>>1;
        a = (a*a) % p;
    }
    return res;
}


bool fermat(ll n)
{
    ll k=1000000;
    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;
    while (k--)
    {
        ll a = 2+ rand()%(n-4);
        if (bigmod(a, n-1, n) != 1)
        ///Just call big mod() algorithm
            return false;
    }

    return true;
}
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {

        cin>>n;
        if(fermat(n))
            cout<<"prime"<<endl;
        else cout<<"composite"<<endl;
    }
    return 0;
}


// C++ program Miller-Rabin primality test
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll bigmod(ll x,ll y,ll p)
{
    ll res = 1;
    x = x % p;
    while (y > 0)
    {

        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
bool millerTest(ll d,ll n)
{
    ll a = 2 + rand() % (n - 4);
    ll x = bigmod(a, d, n);
    if (x == 1 || x == n-1)
        return true;
    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;
        if (x == 1)	 return false;
        if (x == n-1) return true;
    }
    return false;
}
bool isPrime(ll n)
{
    ll k=100;
    if (n <= 1 || n == 4) return false;
    if (n <= 3) return true;
    if(n%2==0) return false;
    ll d = n - 1;
    while (d % 2 == 0)
        d /= 2;
    for (int i = 0; i < k; i++)
        if (millerTest(d, n) == false)
            return false;
    return true;
}
int main()
{
     ll n,t;
     cin>>t;
     while(t--)
     {
         cin>>n;
         if(isPrime(n))
            cout<<"prime"<<endl;
         else cout<<"composite"<<endl;
     }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define m 1001
typedef long long ll;
ll a[m + 7], n, e, phi,l=0;
double d;
bool p[m + 7];
ll bigmod(ll a,ll b,ll z)
{
    if(b==0) return 1%z;
    ll x=bigmod(a,b/2,z);
    x=(x*x)%z;
    if(b%2==1)
    x=(x*a)%z;
    return x;
}
ll prime()
{


    memset(p, true, sizeof(p));
    p[0] = p[1] = false;
    for (ll i = 2; i < m; i++)
    {
        if (p[i])
        {
            a[l++] = i;
            for (ll j = i * i; j < m; j += i)
                p[j] = false;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}
ll key()
{
    prime();
    ll x = a[(rand() %3)];
    ll y = a[(rand() % 3)];
    cout<<x<<" "<<y<<endl;
    e = 2;
    n = x * y;
    phi = (x - 1) * (y - 1);
    while (e < phi)
    {
        // e must be co-prime to phi and
        // smaller than phi.
        if (__gcd(e, phi) == 1)
            break;
        else
            e++;
    }
    ll k =2;
    d = (1 + (k * phi)) /(double) e;
    cout<<d<<endl;
}
int main()
{   prime();
    ll b;
    while (cin >>b)
    {
        key();
        cout<<"public key :"<<n<<" "<<e<<endl;
        cout<<"private key :"<<phi<<" "<<d<<endl;
        cout<<"message :"<<b<<endl;
        //ll c = bigmod(b, e,n);
        ll c=pow(b,e);
        c=c%n;
       // c = bigmod(c, n);
        cout<<"encrypted message :"<<c<<endl;
        double mess =pow(c,d);
        mess=fmod(mess,n);
       // mess = bigmod(mess, n);
       cout<<"decrypted message :"<<mess<<endl;
    }

    return 0;
}

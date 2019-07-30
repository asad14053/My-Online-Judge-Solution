#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll c=0;
//vector<ll>a,x;
int fibo(ll n)
{
    c++;
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}
int main()
{

    ll t,k,n;
   // a.push_back(0),a.push_back(1);
   // x.push_back(0),x.push_back(1);
  /*  for(ll i=2;i<40;i++)
    {
        c=-1;
        a.push_back(fibo(i));
            x.push_back(c);
    }*/
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        cout<<"fib("<<n<<") = "<<c-1<<" calls = "<<fibo(n)<<endl;
    }

    return 0;
}

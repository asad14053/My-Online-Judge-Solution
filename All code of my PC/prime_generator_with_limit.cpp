#include<bits/stdc++.h>
using namespace std;
#define m 1000000002
typedef  long long ll;
bool a[1000000002+2];
//ll p[7000000];
void sieve()
{
    memset(a,true,sizeof(a));
    a[0]=a[1]=false;
    for(ll i=2;i<=sqrtl(m);i++)
     if(a[i])
    for(ll j=i*i;i<m;j+=i)
        a[j]=false;

}
int main()
{
    sieve();
 ll t,a1,b1;
 cin>>t;
 while(t--)
 {
     cin>>a1>>b1;
     for(ll i=a1;i<=b1;i++)
        if(a[i])
        cout<<i<<endl;
 }
    return 0;
}

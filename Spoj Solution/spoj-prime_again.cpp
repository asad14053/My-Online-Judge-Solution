#include<bits/stdc++.h>
using namespace std;
#define m 1000000001
typedef long long ll;
ll a[70000000+7],l=0;
bool p[m+7];
void sieve()
{
    memset(p,true,sizeof(p));
    p[0]=p[1]=false;
    for(ll i=2; i<=m; i++)
    {
        if(p[i])
        {
            a[l++]=i;
            for(ll j=i*i; j<=m; j+=i)
                p[j]=false;
        }
    }
    //cout<<l<<endl;
}
int main()
{
    sieve();
    unsigned int t,m1,n,s,i,temp,flag;
    cin>>t;
    while(t--)
    {
        cin>>m1;
        int i=0;
        while(a[i]<m1) i++;
        cout<<a[i]<<endl;

            return 0;
        }
}

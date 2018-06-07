#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll a[10000];
map<ll,int>mp;
void p()
{
    a[1]=1;
       mp[a[1]]=1;
    ll s=0,i=2;
    while(i<=60)
    {
       if(i%2==0)
            a[i]=a[i/2]*a[i/2]+1;
            else a[i]=a[i/2]*a[i/2+1]+2;
            mp[a[i]%(ll)pow(2,64)]=i;
            i++;
    }
}
int main()
{
    p();
   // freopen("nsu.txt","w",stdout);
     ll n,t;
     (cin>>t);
     for(int i=1;i<=t;i++)
        {
            cin>>n;
            cout<<"Case "<<i<<": "<<mp[n]<<endl;
           //cout<<a[i]<<endl;
        }
    return 0;
}

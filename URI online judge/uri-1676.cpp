#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool a[30010];
long p[3250],l=0;
void sieve()
{
    memset(a,true,sizeof(a));
    a[0]=a[1]=false;
    for( ll i=2;i<30000;i++)
    {
        if(a[i])
        {
            p[l++]=i;

            for(ll j=i*i;j<30000;j+=i)
                a[j]=false;
        }
    }
 //  for(int i=0;i<31;i++)
  //     cout<<p[i]<<endl;
 //   cout<<l<<endl;
}
int main()
{
    sieve();
    int m;
    while(cin>>m,m)
    cout<<p[m-1]<<endl;
    return 0;
}

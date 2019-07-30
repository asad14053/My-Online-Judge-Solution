#include<bits/stdc++.h>
using namespace std;
#define m 32000
typedef long long ll;
ll a[m+7],l=0;
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
}
int main()
{
    sieve();
    unsigned int t,m1,n,s,i,temp,flag;
    cin>>t;
    while(t--)
    {
        cin>>m1>>n;
        if(m1==1)
            m1++;
        for(; m1<=n; m1++)
        {
            flag=0;
            temp=sqrt(m1);
            for(i=0; a[i]<=temp; i++)
            {
                if(m1%a[i]==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<m1<<endl;
        }
    }
            return 0;
        }


#include<bits/stdc++.h>
using namespace std;
#define mx 1000003
typedef long long ll;
ll m=0;
ll p[mx+1];
ll mu[mx],M[mx];
bool b[1000002];
void pr()
{


    memset(b,true,sizeof(b));
    b[0]=b[1]=false;
    for(ll i=2; i<(mx); i++)
    {
        if(b[i])
        {
            p[m++]=i;
            for(ll j=i*i; j<mx; j+=i)
                b[j]=false;
        }

    }
    //cout<<m<<endl;
}
int main(int args,char const*argv[])
{
    pr();
    ll n;

        mu[1]=M[1]=1;
        for(ll i=2; i<=mx; i++)
        {
            ll m=i,cnt=0;
            for(ll j=0; j<m,p[j]*p[j]<=m; j++)
            {
                if(m%p[j]==0)
                {
                    cnt++;
                    if( m/p[j]%p[j]==0)
                    {
                        cnt=-100;
                        break;
                    }
                    m/=p[j];
                }
            }
            if(m != 1)  cnt++;
            if(cnt < 0) mu[i] = 0;
            else if(cnt&1)  mu[i] = -1;
            else    mu[i] = 1;
            M[i] = M[i-1] + mu[i];
        }
    //ll n;
    while(cin>>n,n)
    cout<<setw(8)<<n<<setw(8)<<mu[n]<<setw(8)<<M[n]<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define max 100009
ll a[max];
void p()
{

      ll n, y, b = log10(2);
      for(ll i=1;i<10002;i++)
      {
        y = -floor(1-i*log(2));
        ll m =exp((i-y)*log(2) +y*log(2))+1;
        if(i==10000)cout<<m<<" "<<i-y<<" "<<y;
        if(m<0) m=-m;
        if(m>0&&m<10)
            a[i]=m;
        else
        {
            ll sum=0;
            while(m!=0)
            {
                sum+= m % 10;
                m/=10;
            }
            a[i]=sum;
        }
      }
}
int main(int argc,char const* argv[])
{
    p();
    int n,t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cout<<a[n]<<endl;
    }

    return 0;
}


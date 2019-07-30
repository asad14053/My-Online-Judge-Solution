#include<bits/stdc++.h>
using namespace std;
typedef unsigned  long long  ll;
#define MAX 100000003
ll pr[6000000];
ll c=0;
bool a[MAX];
int p()
{
    memset(a,true,sizeof(a));
    a[0]=a[1]=false;
    for(ll i=2; i<=sqrt(MAX); i++)
        for(ll j=i+i; j<MAX; j+=i)
            if(a[j])
                a[j]=false;

}
int main(int argc,char const *argv[])
{
    p();
    ll n,m,i,flag;
    while(cin>>n)
    {
        if(n%2)
        {
            if(!a[n-2])cout<<n<<" is not the sum of two primes!"<<endl;
            else cout<<n<<" is the sum of 2 and "<<n-2<<"."<<endl;
        }
        else
        {
            m=0;
            flag=0;
            for(i=n/2; i<n; i++)
            {

                if(a[(n/2)-m]==1 && a[i]==1 && ((n/2)-m)!=i)
                {
                    cout<<n<<" is the sum of "<<n-i<<" and "<<i<<".\n";
                    flag=1;
                    break;
                }
                m++;
            }
            if(!flag)cout<<n<<" is not the sum of two primes!"<<endl;
        }


    }
    return 0;
}

#include<bits/stdc++.h>
#define Max 10001000
#define cover(a,d) memset(a,d,sizeof(a))
using namespace std;

bool prime[Max];
long long p[1000000],k=0;
void sieve()
{
    long long i,j;
    prime[1]=false;
    for(i=2; i<=10001000; i++)
    {
        if(prime[i]!=false)
        {
            p[k++]=i;
            for(j=i+i; j<=10001000; j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
int main()
{
    cover(prime,true);
    sieve();

    long long n,i,j,a;
    int c;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        if(n<0) n*=-1;
        for(i=0,c=0; i<k&&n>1&&p[i]<=n; i++)
        {
            if(n%p[i]==0)
            {
                //pf("%lldn",p[i]);
                c++;
                while(n>1 && n%p[i]==0)
                {
                    n/=p[i];
                }
                a=p[i];
            }
            if(n==1) break;
        }
        if(n==1)
        {
            if(c>1) printf("%lld\n",a);
            else printf("-1\n");
        }
        else
        {
            if(c>0) printf("%lld\n",n);
            else printf("-1\n");
        }
    }
}

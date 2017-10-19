#include<bits/stdc++.h>
#define Max 10001000
//#define cover(a,d) memset(a,d,sizeof(a))
using namespace std;

bool prime[Max];
long long p[1001000],k=0;
void sieve()
{
    long long i,j;
    for(i=4; i<= Max; i+=2) prime[i]=true;
    for(i=3; i<=sqrt(Max); i+=2)
    {
        if(prime[i]==false)
        {
            for(j=i*i; j<=Max; j+=i)
                prime[j]=true;
        }
    }

    prime[1]=prime[0]=true;
    int m=0;
    for(int k=2;k<=Max;k++)
    {
        if(prime[k]==false)
            p[m++]=k;
    }
}
int main()
{
    //cover(prime,true);
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


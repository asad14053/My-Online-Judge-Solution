#include<bits/stdc++.h>
using namespace std;
#define max 1000002
bool p[max+2];
int mp[max]={0};
int S(int i)
{
     long n=i,s=0;
                while(n!=0)
                {
                    s+=n%10;
                    n/=10;
                }
                return s;
}
int sieve()
{
    memset(p,1,sizeof(p));
    p[0]=p[1]=0;
    for(long int i=2;i<=sqrt(max);i++)
        if(p[i])
        for(long int j=i*i;j<max;j+=i)p[j]=0;
        int c=0;
         for(int i=0;i<=max;i++)
        {
            if(p[i]&&p[S(i)]) c++;
            mp[i]=c;
        }
    return 0;
}
int main()
{
    sieve();
    int n;
    long long a,b;
    scanf("%d",&n);
    while(n--)
    {
        int c=0;
        scanf("%lld%lld",&a,&b);

        printf("%d\n",mp[b]-mp[a-1]);
    }
    return 0;
}

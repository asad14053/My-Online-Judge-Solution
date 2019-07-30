#include<bits/stdc++.h>
#include<string.h>
using namespace std;
long long int cnt;
long long int G(long long int a,long long int b)
{
    long long int temp,gcd,m,n,lcm;
    m=a;
    n=b;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;
    lcm=(m*n)/gcd;
    if(cnt>0)
    {
        return gcd;
    }
    return lcm;
}
int main()
{
    long long int a,b,c,d,x,t ,N,i,j,lcm,num_of_set[102],mul,div,sum;
    scanf("%lld",&t );
    for(x=1;x<=t ;x++)
    {
        cnt=0;
        scanf("%lld",&N);
        lcm=1;
        for(i=0;i<N;i++)
        {
            scanf("%lld",&num_of_set[i]);
            lcm=G(lcm,num_of_set[i]);
        }
        sum=0;
        for(i=0;i<N;i++)
        {
            div=lcm/num_of_set[i];
            mul=div*1;
            sum+=mul;
        }
        cnt++;
        a=N*lcm;
        b=G(a,sum);
        c=a/b;
        d=sum/b;
        printf("Case %lld: %lld/%lld\n",x,c,d);
        memset(num_of_set,0,sizeof(num_of_set));
    }
    return 0;
}

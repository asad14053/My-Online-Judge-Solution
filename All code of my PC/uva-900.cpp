#include<stdio.h>
int main()
{
    long long a[60],i,n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        a[0]=0;
        a[1]=1;
        for(i=2;i<=n+1;i++)
        a[i]=a[i-1]+a[i-2];
        printf("%lld\n",a[n+1]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    long long a=0,b=1,i,c=0,n,j=0,s;
    while(scanf("%lld",&n)==1)
    {
        s=0;
        for(i=1;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
            s+=a;

        }
        printf("%lld\n",s);
    }
    return 0;
}


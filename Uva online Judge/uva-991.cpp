#include<stdio.h>
long long factor(long long int n)
{
    long long int sum=1,i;
    for(i=1; i<=n; i++)
    {
        sum=sum*i;
    }
    return sum;
}
int main()
{
    long long int n,ans,sum,div,d,x,cou=0;
    while(scanf("%lld",&n)==1)
    {
        if(cou!=0)
            printf("\n");
        d=factor(2*n);
        div=factor(n+1);
        x=factor(n);
        ans=d/(div*x);

        printf("%lld\n",ans);
        cou++;
    }

}


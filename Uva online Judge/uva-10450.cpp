#include<stdio.h>
int main()
{
    long long int a,b,i,j,k,l,ar[52];
    ar[0]=ar[1]=1;
    for(i=2;i<52;i++)
        ar[i]=ar[i-1]+ar[i-2];
        scanf("%lld",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%lld",&b);
        printf("Scenario #%lld:\n%lld\n\n",i,ar[b+1]);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    long long int a[100001],b,c,i,n,j;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        for(j=0; j<n; j++)
        {
            scanf("%lld",&a[j]);
        }
        c=a[0];
        for(i=1; i<n; i++)
        {
            c=c^a[i];
        }
        if(c==0)
            printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}


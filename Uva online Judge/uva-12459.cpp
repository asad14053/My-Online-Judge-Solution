#include <stdio.h>

int main()
{
    long long a[81];
    int x,i;
    a[0]=1;
    a[1]=1;
    for(i=2; i<81; i++)
    {
        a[i]=a[i-2]+a[i-1];
    }
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
            break;
        printf("%lld\n",a[x]);
    }
    return 0;
}

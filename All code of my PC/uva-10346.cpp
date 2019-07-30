#include<stdio.h>
int main()
{
    int n,k,s,b,tb,r;
    while(scanf("%d%d",&n,&k)==2)
    {
        s=n;
        tb=0;
        while(s>=k)
        {
            b=s/k;
            s=b+s%k;
            tb=tb+b;
        }
        printf("%d\n",n+tb);
    }
    return 0;
}

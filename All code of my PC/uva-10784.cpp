#include<bits/stdc++.h>
int main()
{
    long long i=0,n,k;
    double a;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        else
        {
            k=0;
            a=1.0*((sqrt(n*8+9)+3)/2);
            k=a;
            if(a>k) k++;
            printf("Case %lld: %lld\n",++i,k);
        }
    }
    return 0;
}

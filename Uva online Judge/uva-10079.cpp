#include<bits/stdc++.h>
int main()
{
    long long a,n;
    while(scanf("%lld",&n)==1)
    {
        if(n<0)
            break;
        else
            n=(n*(n+1)/2)+1;
        printf("%lld\n",n);
    }
    return 0;
}

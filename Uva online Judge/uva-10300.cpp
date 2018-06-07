#include<bits/stdc++.h>
int main()
{
    long long n,m,a,b,c,i,s;
    while(scanf("%lld",&n)==1)
        while(n--)
        {
            s=0;
            scanf("%lld",&m);
            for(i=1; i<=m; i++)
            {
                scanf("%lld%lld%lld",&a,&b,&c);
                s+=a*c;

            }
            printf("%lld\n",s);
        }
    return 0;
}

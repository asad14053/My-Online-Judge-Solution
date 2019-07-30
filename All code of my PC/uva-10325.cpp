#include<bits/stdc++.h>
int main()
{
    long long n,m,o[1000],p,c;
    while(scanf("%lld%lld",&n,&m)==2)
    {
        c=0;
        for(int j=0;j<m;j++)
            scanf("%lld",o[j]);

        for(int i=2;i<=n;i++)
        {
             for(int j=0;j<m;j++)
             {
                 if(i%o[j]!=0)
                    c++;
             }

        }
        printf("%lld",c+1);
    }
    return 0;
}


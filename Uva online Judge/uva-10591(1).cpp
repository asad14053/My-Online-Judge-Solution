#include<bits/stdc++.h>
int main()
{
    long long n,i,j,k,m,s,l;
    while(scanf("%lld",&n)==1)
    {
        m=0;
        while(n--)
        {
            scanf("%lld",&l);
            k=l;
            for(i=1; i!=0; i++)
            {
                s=0;
                for(j=1; j!=0; j++)
                {
                    s+=(k%10)*(k%10);
                    k/=10;
                    if(k==0)
                    {
                        k=s;
                        break;
                    }
                }
                if(k<=9) break;
            }
            if(k==1||k==7)
                printf("Case #%lld: %lld is a Happy number.\n",++m,l);
            else
                printf("Case #%lld: %lld is an Unhappy number.\n",++m,l);
        }
    }
    return 0;
}

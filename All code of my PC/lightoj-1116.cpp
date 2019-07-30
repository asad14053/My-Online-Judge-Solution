#include<stdio.h>
int main()
{
    int t,m,l=0;
    long long int w;
    scanf("%d",&t);
    if(t<=10000)
        while(t--)
        {
            scanf("%lld",&w);
            if(w%2!=0)
                printf("Case %d: Impossible\n",++l);
            else
            {
                m=1;
                while(w%2==0)
                {
                    m*=2;
                    w/=2;
                }
                printf("Case %d: %lld %d\n",++l,w,m);
            }

        }

    return 0;
}

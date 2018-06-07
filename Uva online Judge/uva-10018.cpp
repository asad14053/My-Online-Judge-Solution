#include<stdio.h>
int main()
{
    long long n,i,m,a,b,c,d,sum;
    scanf("%lld",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%lld",&m);
        sum=0;
        c=0;

        while(1)
        {
            sum=0;
            a=m;
            while(a!=0)
            {
                b=a%10;
                d=a/10;
                sum=sum*10+b;
                a=d;
            }
            if(sum!=m)
            {

                m=sum+m;
                c++;

            }
            else
                break;
        }
        printf("%lld %lld\n",c,sum);
    }
    return 0;

}

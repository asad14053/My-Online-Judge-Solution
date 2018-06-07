#include<stdio.h>
int main()
{
    long long int i,j,n,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%lld",&n)==1)
    {

        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else
        {
            sum=0;
            for(j=1; j<=n/2; j++)
            {
                if(n%j==0)
                    sum=sum+j;
            }
            if(sum==n)
                printf("%5lld  PERFECT\n",n);
            else if(sum>n)
                printf("%5lld  ABUNDANT\n",n);
            else
                printf("%5lld  DEFICIENT\n",n);
        }
    }
    return 0;
}

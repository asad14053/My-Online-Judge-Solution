#include<stdio.h>
int fact (long n);
int main()
{
    long long n,i,sum;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n<0&&n%2==0)
        printf("Underflow!\n");
        else if(n>=0&&n<8)
        printf("Underflow!\n");
        else if(n<0&&n%2!=0)
        printf("Overflow!\n");
        else if(n>13)
         printf("Overflow!\n");
    else
        {
            sum=1;
            for(i=n;i>=1;i--)
                sum=sum*i;
        printf("%lld\n",sum);
        }
    }
    return 0;
}

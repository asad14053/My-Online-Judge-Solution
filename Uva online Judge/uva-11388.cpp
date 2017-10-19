#include<stdio.h>
int main()
{
long int n,m,t;
scanf("%ld",&t);
while(t--)
{
    scanf("%ld%ld",&m,&n);
    if(n%m==0)
    printf("%ld %ld\n",m,n);
    else
    printf("-1\n");
}
return 0;
}
/*#include <stdio.h>

long long int GCD(long long int num1,long long int num2)
{
    while(num2>0)
    {
        num1=num1%num2;
        num1^=num2;
        num2^=num1;
        num1^=num2;
    }
    return num1;
}

int main()
{
    long long int num1, num2, G, L, I,J,K, test_case;

    while(scanf("%lld", &test_case)==1)
    {
        for(I=0; I<test_case; I++)
        {
            scanf("%lld %lld", &num1, &num2);
            G=GCD(num1, num2);
            L=(num1*num2)/G;
            if(G==num1 && L==num2)
                printf("%lld %lld\n", G, L);
            else
                printf("-1\n");
        }
    }
}*/

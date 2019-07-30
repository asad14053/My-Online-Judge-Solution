#include <stdio.h>
int main()
{
    long  a;
    while(scanf("%ld",&a)==1 && a!=0)
    {

        printf("%ld\n",(a*(a+1)*(2*a+1))/6);
    }
    return 0;
}

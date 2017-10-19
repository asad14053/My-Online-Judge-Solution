#include<stdio.h>
#include<math.h>
int main()
{
    long a,b,c,n;
    double d;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        d=sqrt(a*a+b*b);
        printf("%.2lf %.2lf\n",c-d,c+d);

    }
    return 0;
}

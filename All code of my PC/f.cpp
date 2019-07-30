#include<stdio.h>
#include<math.h>
main()
{
    int i,n;
    double a,d,area;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lf",&d);
        a=sqrt((d*d)/2);
        area=.5*a*a;
        printf("Test %d: %.2lf\n",i,area);
    }
    return 0;
}

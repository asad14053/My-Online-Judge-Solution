#include <stdio.h>

int main()
{
    int c,i=1;
    double r;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%lf",&r);

        printf("Case %d:\n",i);

        printf("%.0lf %.0lf\n",-(double)(2.25*r),(double)(1.5*r));
        printf("%.0lf %.0lf\n",(double)(2.75*r),(double)(1.5*r));
        printf("%.0lf %.0lf\n",(double)(2.75*r),-(double)(1.5*r));
        printf("%.0lf %.0lf\n", -(double)(2.25*r),-(double)(1.5*r));
        i++;
    }
    return 0;
}

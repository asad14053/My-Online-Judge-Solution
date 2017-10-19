#include<stdio.h>
#include<math.h>

int main()
{
    int t, test;
    double ox, oy, ax, ay, bx, by, a, b, o, ao, md;
    scanf("%d",&test);
    for(t=1; t<=test; t++)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&ox, &oy, &ax, &ay, &bx, &by);
        a=sqrt((ox-bx)*(ox-bx)+(oy-by)*(oy-by));
        b=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        o=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
        ao=acos((b*b+a*a-o*o)/(2*b*a));
        md=a*ao;
        printf("Case %d: %.10lf\n",t,md);
    }
    return 0;
}

#include<stdio.h>
int main()
{

    double x1,y1,x2,y2,x3,y3,x4,y4,midx,midy,dx,dy;
    while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)==4)
    {
        midx=(x1+x2)/2.0;
        midy=(y1+y2)/2.0;
        dx=midx-x1;
        dy=midy-y1;
        x3=midx-dy;
        y3=midy+dx;
        x4=midx+dy;
        y4=midy-dx;
        printf("%lf %lf %lf %lf\n",x3,y3,x4,y4);
    }

    return 0;
}

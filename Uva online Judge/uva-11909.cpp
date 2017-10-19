#include <stdio.h>
#include <math.h>

int main()
{
    int l,w,h,t;
    double pi=acos(-1);
    while(scanf("%d %d %d %d",&l,&w,&h,&t)==4)
    {
        double d=l*tan(t*pi/180.0);
        double ans;
        if(d > h)
        {
            ans=0.5*h*h*l*w/d;
        }
        else
        {
            ans=l*w*((h)-(d*0.5));
        }
        printf("%.3lf mL\n", ans);
    }
    return 0;
}

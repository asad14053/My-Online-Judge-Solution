#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    double d,v,ans;
    while(scanf("%lf%lf",&d,&v)==2)
    {
        if(d==0 && v==0)
            break;
        ans=pow((pow(d,3)-6*v/PI),0.333333333333);
        printf("%.3lf\n",ans);
    }
}

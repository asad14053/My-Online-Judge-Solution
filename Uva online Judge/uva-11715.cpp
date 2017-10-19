#include <stdio.h>
#include <math.h>

int main()
{
    int cases,i=1;
    double u,v,a,t,s;
    while(1)
    {
        scanf("%d",&cases);
        if(cases==0)
        {
            break;
        }
        a=0;
        u=0;
        v=0;
        s=0;
        t=0;
        if(cases==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=(u*t)+(0.5*(a*t*t));
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
        }
        else if(cases==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=(u*t)+(0.5*(a*t*t));
            printf("Case %d: %.3lf %.3lf\n",i,s,t);
        }
        else if(cases==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt((u*u)+(2.0*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }
        else if(cases==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt((v*v)-(2.0*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }
        i++;
    }
    return 0;
}

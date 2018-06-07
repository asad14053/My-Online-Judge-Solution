#include <stdio.h>
#include <math.h>

int tax(double x)
{
    if(x<180001)
        return 0;
    if(x<200001)
        return 2000;
    if(x<480001)
        return ceil((x-180000)*0.1);
    double temp=0;
    if(x<880001)
    {
        x-=480000;
        temp=30000;
        return ceil((x*0.15) +temp);
    }
    if(x<1180001)
    {
        x-=880000;
        temp=90000;
        return ceil((x*0.2) +temp);
    }
    x-=1180000;
    temp=150000;
    return ceil((x*0.25) +temp);
}

int main()
{
    int n,i,x;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);
        printf("Case %d: %d\n",i,tax(x));
    }
    return 0;
}

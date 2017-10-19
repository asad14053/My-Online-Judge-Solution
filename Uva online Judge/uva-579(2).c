#include<stdio.h>
#include<math.h>
int main()
{
double m,h,a=0,ha,ma;
while(scanf("%lf:%lf",&h,&m)==2)
{
if((h==0)&&(m==0))
break;
ha=(h+m/60)*30;
ma=m*6;
a=(ha-ma);
if(a<0)
a*=-1;

if(a>180)
a=360-a;

printf("%.3lf\n",a);
}
return 0;
}

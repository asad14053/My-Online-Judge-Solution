#include <stdio.h>
#include <math.h>
#define pi acos(0.0)

int main()
{
double n;

while(scanf("%lf",&n)==1)
{
printf("%.10lf\n",(n*sin(108*pi/90)/sin(63*pi/90)));
}

return 0;
}

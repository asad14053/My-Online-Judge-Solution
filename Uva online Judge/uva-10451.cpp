#include <cstdio>
#include <cmath>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    double n,x,y,a,R,r,A1,A2,A;
    int i=1;
    while(scanf("%lf %lf",&n,&A)==2 && n>2)
    {
        R=sqrt(2*A/(n*sin(2*pi/n)));
        r=sqrt(A/(n*tan(pi/n)));
        A1=pi*R*R;
        A2=pi*r*r;

        printf("Case %d: %.5lf %.5lf\n",i,A1-A,A-A2);
        i++;
    }

    return 0;
}

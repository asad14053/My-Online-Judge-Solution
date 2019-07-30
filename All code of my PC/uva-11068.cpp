#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1,x2, y1, y2, c1, c2,x,y;
    while(scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &c1, &x2, &y2, &c2)==6)
    {
        if(x1==0 && x2==0 && y1==0 && y2==0 && c1==0 && c2==0)
            break;

        else if(x1*y2==x2*y1 || y1*x2==y2)
        {
            printf("No fixed point exists.\n");
        }
        else
        {
            x=(((c1*y2)-(c2*y1))/((x1*y2)-(x2*y1)));
            y=(((c1*x2)-(c2*x1))/((y1*x2)-(y2*x1)));
            printf("The fixed point is at %.2lf %.2lf.\n",x,y);
        }
    }
    return 0;
}


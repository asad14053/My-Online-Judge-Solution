#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main()
{
    double r,s,p;
    while(scanf("%lf %lf",&r,&s)==2)
        printf("%.3lf\n",r*r*s*sin((2*pi)/s)/2);
    return 0;
}

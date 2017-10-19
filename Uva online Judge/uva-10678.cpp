#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

#define PI 2*acos(0.0)

int main()
{
    int test,i,D,L;
    double a,b,res;
    cin>>test;
    for(i=0; i<test; i++)
    {
        cin>>D>>L;
        a=L/2.0;
        b=sqrt((L/2.0)*(L/2.0)-(D/2.0)*(D/2.0));
        res=PI*a*b;
        printf("%.3lf\n",res);
    }
    return 0;
}

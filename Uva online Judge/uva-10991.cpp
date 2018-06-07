#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    int t;
    cin>>t;
    // cout<<pi<<endl;
    while(t--)
    {
        double r1,r2,r3,a,b,c,s,A,A1,B1,C1;
        cin>>r1>>r2>>r3;
        a=r2+r3;
        b=r1+r3;
        c=r1+r2;
        s=(double)0.5*(a+b+c);

        A=sqrtl(s*(s-a)*(s-b)*(s-c));
        // cout<<A<<endl;
        A1=acos((b*b+c*c-a*a)/(2.0*b*c));
        B1=acos((a*a+c*c-b*b)/(2.0*a*c));
        C1=acos((a*a+b*b-c*c)/(2.0*a*b));
        // if(A1>pi/2) A1=A1-pi/2;
        // if(B1>pi/2) B1=B1-pi/2;
        // if(C1>pi/2) C1=C1-pi/2;
        // cout<<A1<<"  "<<B1<<" "<<C1<<endl;
        double a1=.5*A1*r1*r1;
        double a2=.5*B1*r2*r2 ;
        double a3=.5*C1*r3*r3;
        printf("%.4lf\n",A-a1-a2-a3);
    }
    return 0;
}

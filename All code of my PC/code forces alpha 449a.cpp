#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    double d,h,v,e;
    cin>>d>>h>>v>>e;
    double a=pi;
    a=d-pi/4;
    if(a>=0)
    {
        cout<<"YES"<<endl;
        printf("%.10lf\n",a);
    }

    else cout<<"NO"<<endl;
}

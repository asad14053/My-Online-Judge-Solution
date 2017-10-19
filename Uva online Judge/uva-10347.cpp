#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s;
    while(cin>>a>>b>>c)
    {
        s=.5*(a+b+c);
        c=(double)4/3*sqrtl(s*(s-a)*(s-b)*(s-c));
        if(c>0.0)
        printf("%.3lf\n",c);
        else cout<<"-1.000"<<endl;

    }
}

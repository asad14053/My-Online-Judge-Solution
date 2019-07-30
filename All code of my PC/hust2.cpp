#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)
int main()
{
    int a,b,d,a1,a2,b1,b2,h;
    while(cin>>a>>b>>d)
    {
        cin>>a1>>b1>>a2>>b2>>h;
        if((PI*a1*a1+PI*a2*a2<=a*b&&min(a,b)>=2*max(a1,a2))&&(PI*b1*b1+PI*b2*b2<=a*b&&min(a,b)>=2*max(b1,b2))&&h<=d)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    while(cin>>a>>b>>c)
    {
        d=a+a*(b/100.0+c/100.0);
        int m= d;
        if((d-m)>=.5)
            d=ceil(d);
        else d=floor(d);
        cout<<"The total meal cost is "<<(d)<<" dollars."<<endl;
    }
    return 0;
}

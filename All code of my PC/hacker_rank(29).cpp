#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,m1,m2,y1,y2;
    while(cin>>d1>>m1>>y1>>d2>>m2>>y2)
    {
        long a=12*31*y1+31*m1+d1-(12*31*y2+31*m2+d2);
       // cout<<a<<endl;
        if(a<31)
            cout<<a*15<<endl;
        else if(a<=12*31&&a>=31)
            cout<<500*a/31<<endl;
        else if(a>12*31)
            cout<<"10000"<<endl;
    }
    return 0;
}
/*
1 1 2015
31 12 2014
   */

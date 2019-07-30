#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,a,b) for(int i=(a);i<(b);i++)
double fun(double x)
{
     return 2*x*x-12*x+7;/// set your equation
}
double ts(double s,double e)
{
    fr(i,0,201)   /// to get efficient result set large range (0,1e7)
    {
        double l1=(2.0*s+e)/3.0;
        double l2=(2.0*e+s)/3.0;
        if(fun(l1)<fun(l2))   /// min = '<' and max= '>'
            e=l2;
        else s=l1;
    }
    return fun(s);  /// check max or min from s to e
}
int main()
{
    ll x, y,t,q;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        q=floor(ts(x,y));
        cout<<q<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,t,a,b,v,mx,l;
    while(cin>>x>>y)
    {
        mx=1000000000;
        cin>>t;
        while(t--)
        {
            cin>>a>>b>>v;
            l=sqrt((x-a)*(x-a)+(y-b)*(y-b));
            mx=min(mx,l/v);
        }
        printf("%.10lf\n",mx);
    }
    return 0;
}

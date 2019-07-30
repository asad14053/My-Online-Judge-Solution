#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,x,y;
    cin>>t;
    int i=1;
    while(t--)
    {
        cin>>x>>y;
        double z=(2*x)*(2*x)-y*y;
        cout<<"Case "<<i++<<": "<<abs(z)<<endl;
    }
    return 0;
}

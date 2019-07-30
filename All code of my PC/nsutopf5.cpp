#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
struct node
{
    int a,b,c;
}m[1109];
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        double s=0,d=0;
        for(int i=0;i<n;i++)
        {
            cin>>m[i].a>>m[i].b>>m[i].c;
            d=sqrt(m[i].a*m[i].a+m[i].b*m[i].b+m[i].c*m[i].c)/2;
            s=max(s,(float)4/3*3.14*d*d*d);
        }
        cout<<s<<endl;
    }
    return 0;
}

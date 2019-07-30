#include<bits/stdc++.h>
#include<math.h>
#define pre setprecision 2
using namespace std;
int main()
{
    int n;
    double a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
     (pre)b=(b/sqrt(2));
        if(a==(pre)b)
        cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

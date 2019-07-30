#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
  int n;
    double t;
    cin>>n;
    int i=1;
    while(n--)
    {cin>>t;
    cout<<"Case "<<i++<<": ";
       // cout<<setprecision(5);
        printf("%.3f\n",(double)t/(double)pi);

    }
}

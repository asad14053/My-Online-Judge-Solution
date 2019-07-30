#include<bits/stdc++.h>
using namespace std;
int main()
{

 int t,i=1;
 cin>>t;
 double z,x,y;
 while(t--)
 {
     cin>>x;
     z=2.0*acos(-1)*(x/2)*(x/2);
     z=(double)2.0*x*x-z;    // cout<<z;
     printf("%.2f\n",z/2);
 }
    return 0;
}

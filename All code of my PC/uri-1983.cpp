#include<bits/stdc++.h>
using namespace std;
long a[1000001];
int main()
{

    long t,m=0,d;
    double c,max=-1;;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a[i]>>c;
        if(c>max)
        {
            max=c;
            d=i;
        }
        if(max>=8)
            m=1;
        else
            m=0;
      // cout<<max<<endl;
    }
    if(m) cout<<a[d]<<endl;
    else cout<<"Minimum note not reached"<<endl;
    return 0;
}

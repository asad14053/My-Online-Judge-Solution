#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        double a,sum=0.0,sum1=0.0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum+=a;
            sum1+=(100-a);
        }
        cout<<setprecision(12);
        cout<<sum*100.0/(sum+sum1)<<endl;
    }
    return 0;
}

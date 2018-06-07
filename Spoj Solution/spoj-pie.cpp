#include<bits/stdc++.h>
using namespace std;
#define MAX 10009
#define pi 2*acos(0.0)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,f;
        cin>>n>>f;
        int a[n+3];
        for(int i=0;i<n;i++)
        cin>>a[i];
        double sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i]*a[i];
            cout<<sum<<endl;
            printf("%.4lf\n",(double)(pi*(sum))/(f+1));
          //  cout<<acos(-1)<<endl;
    }



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{long long n,i,a[100],sm,p;
   // int n;
//   cin>>n;

    p=2; sm=2; a[1]=2;
    for(i=2;i<=55;i++)
    {
        p*=2;
        sm+=p;
        a[i]=sm;
        //cout<<sm<<" ";
    }
    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}

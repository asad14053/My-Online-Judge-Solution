#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long a[n+4],b[n+4];
        for(int i=0;i<n;i++)
           {
               cin>>a[i];
               b[i]=a[i];
           }
           int c=0;
        sort(a,a+n,greater<int>());
        for(int i=0;i<n;i++)
            if(b[i]==a[i])
               c++;
     cout<<c<<endl;
    }
    return 0;
}

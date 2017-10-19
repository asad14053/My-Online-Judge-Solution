#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n+2];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int mx=a[0];int mn=a[0];int c=0;
        for(int i=1; i<n; i++)
           {
               if(a[i]>mx)
               {
                   mx=a[i];
                   c++;
               }
               else if(a[i]<mn)
               {
                   mn=a[i];
                   c++;
               }
           }
           cout<<c<<endl;
    }
}

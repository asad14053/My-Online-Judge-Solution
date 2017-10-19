#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    while(cin>>t)
    {
        int a[t+2];
        for(int i=0; i<t; i++)
         cin>>a[i];
         sort(a,a+t);
         for(int i=0;i<t;i++)
            cout<<a[i]<<endl;
         if(a[0])
            cout<<-1<<endl;
         else cout<<1<<endl;
    }

    return 0;
}

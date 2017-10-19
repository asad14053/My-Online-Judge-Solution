#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        long long a[n+2],c=1,m=1;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n-1; i++)
        {
            if(a[i]<a[i+1])
                c++;
            else c=1;
            m=max(c,m);
           // cout<<c<<endl;
        }
        cout<<m<<endl;
    }
    return 0;
}

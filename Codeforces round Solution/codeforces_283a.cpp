#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[101],n;
    (cin>>n);
    {
    for(int i=0;i<n;i++)
        cin>>a[i];
    int d=0,mx=20000;
    for(int i=1;i<n;i++)
        d=max(d,a[i]-a[i-1]);
    for(int i=1;i<n-1;i++)
        mx=min(mx,max(d,a[i+1]-a[i-1]));
    cout<<mx<<endl;
    }
    return 0;
}

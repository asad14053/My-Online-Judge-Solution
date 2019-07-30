#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    map<int,int>mp;
    vector<int>v;
    int h,u,oo,z=0;
    while(cin>>n>>k)
    {
        int a[n+2],b[n+2];
        for(int i=0; i<n; i++)
            cin>>a[i],b[i]=a[i];
        int mx=0;
        for(int i=1; i<n; i++)
        {
            if((a[i]+a[i-1])<k)
            {
                a[i]=k-(a[i-1]);
               // mx=max(a[i],mx);
            }

        }
        for(int i=0; i<n; i++)
        {
            mx+=abs(a[i]-b[i]);
        }
        cout<<mx<<endl;
        for(int i=0; i<n; i++)
        {
            if(i)
                cout<<" ";
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}

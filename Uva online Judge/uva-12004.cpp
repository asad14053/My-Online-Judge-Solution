#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long ans=0;
        cin>>n;
        ans=n*(n-1);
        if(ans%4==0)
            cout<<"Case "<<i<<": "<<ans/4<<endl;
        else cout<<"Case "<<i<<": "<<ans/2<<"/2"<<endl;
    }
    return 0;
}

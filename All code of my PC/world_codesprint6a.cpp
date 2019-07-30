#include<bits/stdc++.h>
using namespace std;
typedef long ll;
int main()
{
    ll a,n,t,x,s,sm;
    while(cin>>n>>s)
    {
        sm=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(i!=s)
            sm+=x;

        }
        cin>>t;
        if(sm/2>=t)
            cout<<"Bon Appetit"<<endl;
        cout<<abs(t-sm/2)<<endl;
    }
    return 0;
}

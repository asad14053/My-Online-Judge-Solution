#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k;
    cin>>t;
    bool c=false;
    while(t--)
    {
        cin>>k;
        ll r=0;
        if(k<0)k*=-1;
        n=ceil((-1 + sqrtl(1+8*k))/2);
        if(k==0) r=3;
        else{
        if((n*(n+1)/2)==k)
            r=n;
        else
        {
            while(((n*(n+1))/2-k)%2!=0)
                n++;
            r=n;
        }


    }
    //cout<<endl;
    if(c) cout<<endl;
        c=true;
        cout<<r<<endl;
    }

    return 0;
}

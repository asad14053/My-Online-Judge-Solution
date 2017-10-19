#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n,n)
    {
        ll k=n,s=n;
        while(k!=1)
        {
            if(k%2)
                k=3*k+1;
            else k/=2;
            if(k>s) s=k;
        }
        cout<<s<<endl;

    }

    return 0;
}


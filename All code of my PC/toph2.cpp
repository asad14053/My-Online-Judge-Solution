#include<bits/stdc++.h>
using namespace std;
typedef long ll;
bool v[1000009];
int main()
{
    ll t,n,a;
    v[0]=true;
    while(cin>>t)
    {
        ll m=t,s=0;
        while(m--)
        {
            cin>>n;
            v[n]=1;
        }

        for(ll i=1;i<=n;i++)
            if(!v[i])
            {if(v[i]==v[i+1])
                continue;
            else
                cout<<i<<endl;
            }

    }
    return 0;
}

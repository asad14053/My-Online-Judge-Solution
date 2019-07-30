#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    return b? gcd(b,a%b):a ;
}

int main()
{
    int n,t;
    while(cin>>n>>t)
    {
        if(n==0 && t==0)
            break;
        ll lcm=1;
        cin>>lcm;
        ll temp;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            temp=temp/gcd(lcm,temp);
            lcm*=temp;
            cout<<"------"<<lcm<<endl;
        }
        for(int i=0;i<t;i++)
        {
            cin>>temp;
            if(temp%lcm==0) cout<<temp<<"-"<<temp<<endl;
            else
            {
                temp=temp/lcm;
                cout<<temp*lcm<<"-"<<(temp+1)*lcm<<endl;
            }

        }
    }

  return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,s,x;
   while (cin>>t>>s>>x)
    {
        ll l;
        if(t!=0)
         l=x/t+x%t+1;
        else  l=x/s+x%s+1;
        ll sum=t;
        for(ll i=2; i<=x; i++)
        {
            if(sum<x)
            {
                if(i%2==0)
                   {
                       sum=t+i/2*s;
                      //  cout<<"=="<<i<<"="<<sum<<endl;
                   }
                else
                {
                    sum=sum+1;            //  cout<<i<<"===="<<sum<<endl;
                }

            }
            else break;
        }
        if(sum==x)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

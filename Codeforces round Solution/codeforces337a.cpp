#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans;
    while(cin>>n)
    {
        if(n%2) ans=0;
        else
        {if(n%4)
            ans=n/4;
            else ans=n/4-1;
        }
        cout<<ans<<endl;
    }
}

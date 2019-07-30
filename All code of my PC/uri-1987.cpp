#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long t,n;
    while(cin>>t)
    {
        long long s=0;

            cin>>n;
            while(n!=0)
            {
                s+=n%10;
                n/=10;
            }
        if(s%3==0)
            cout<<s<<" sim"<<endl;
        else
            cout<<s<<" nao"<<endl;

    }

    return 0;
}

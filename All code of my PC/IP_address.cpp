#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    ll n;
    while(cin>>n>>s)
    {
        // cout<<n<<s<<endl;
        if(n>247)
            cout<<"invalid"<<endl;
        else
        {
            if(n>=240)
                cout<<"class E"<<endl;
            else if(n>=224)
                cout<<"class D"<<endl;
            else if(n>=192)
                cout<<"class C"<<endl;
            else    if(n>=128)
                cout<<"class B"<<endl;
            else if(n>=0)
                cout<<"class A"<<endl;

        }
    }
    return 0;
}

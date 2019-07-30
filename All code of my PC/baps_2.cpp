#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,a;
    cin>>t;
    int i=1;
    while(t--)
    {
        cin>>n>>a;
        if(n==0)
        {
            cout<<"Case "<<i++<<":"<<endl;
            cout<<a/3<<endl<<2*(a/3)*2/3<<endl<<(a/3)*2/3<<endl;
        }
        else
        {
            cout<<"Case "<<i++<<":"<<endl;
            cout<<(3*a)*1/2<<endl<<a*2<<endl<<(3*a)*3/2<<endl;

        }
    }
    return 0;
}

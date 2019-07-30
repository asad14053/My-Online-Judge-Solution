#include<bits/stdc++.h>
using namespace std;
typedef long ll;
int main()
{
    ll n,l=0;
    cin>>n;
    while(n--)
    {
        ll t,s;
        string a;
        cin>>t>>s;
        a.resize(t,'0');
        a[s]='1';
        reverse(a.begin(),a.end());
      //  cout<<
        int n=a.find('1');
        cout<<"Case "<<++l<<": "<<n<<endl;
    }
    return 0;
}

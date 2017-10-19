#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll s=0;
ll p(string n)
{
    s=0;
    ll m=0;
    for(int i=0; i<n.size(); i++)
        s+=n[i]-'0';
         m=s%9;
        if(m==0 and s!=0) m=9;
  //  cout<<m<<endl;
    return m;
}
int main()
{
    string a,b;
    while(cin>>a>>b,a!="0"||b!="0")
    {
        ll m=p(a);
        ll n=p(b);
        //cout<<"m-"<<m<<"-"<<n<<endl;
        if(m>n) cout<<1<<endl;
        else if(m<n) cout<<2<<endl;
        else cout<<0<<endl;
        // cout<<endl;
    }
    return 0;
}


/*

9999999999999999 999999999999999
888888888888888888 88888888888888888

*/

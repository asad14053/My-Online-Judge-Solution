#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll g()
{
    ll s1=0,n,b,a;
    for(cin>>n>>b;n--;cin>>a,s1*=b,s1+=a);
    return s1;
}
int main()
{
    ll n,m;
    // while(true)
     {
         n=g();
         m=g();
         if(n==m)
            cout<<"="<<endl;
         else if(n>m)
            cout<<">"<<endl;
         else cout<<"<"<<endl;
     }
    return 0;
}

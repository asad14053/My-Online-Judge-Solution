#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll g()
{
    ll n,b,p=0,x;
    cin>>n>>b;
    //n=n-1;
    while(n>=0)
    {
        cin>>x;
        p+=x*pow(b,n-1);
        n--;
    }
    return p;
}
int main()
{
    long long n=0,m=0;
    while(true)
    {
       n=g();
       m=g();
       cout<<n<<" "<<m<<endl;
       if(n==m)
        cout<<"="<<endl;
       else if(n>m)
        cout<<">"<<endl;
       else cout<<"<"<<endl;
    }
    return 0;
}

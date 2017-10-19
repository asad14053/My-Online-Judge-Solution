#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    long long n,co=0,a,x;
    cin>>n>>x;
    while(n--)
    {
        cin>>c>>a;
        cout<<c<<endl;
        if(c=='-')
            a*=-1;
        if(x+a>=0)
            x=x+a;
        else co++;
           // cout<<co<<endl;
    }
    cout<<x<<" "<<co<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,p,q;
    string a,a1,b,b1;
    cin>>t;
    while(t--)
    {
        cin>>a>>a1>>b>>b1;
        cin>>p>>q;
        if((p+q)%2==0)
        {
            if(a1=="PAR") cout<<a<<endl;
            else   cout<<b<<endl;
        }
        else
        {
           if(a1=="PAR")cout<<b<<endl;
           else cout<<a<<endl;
        }
    }
    return 0;
}

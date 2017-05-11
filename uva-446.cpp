#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[50],b[50],c;
        bool f=false;
        cin>>a>>c>>b;
        long x=strtol(a,NULL,16);
        long y=strtol(b,NULL,16);
       // cout<<x<<" "<<y<<endl;
        string p=bitset<13>(x).to_string();
        string q=bitset<13>(y).to_string();
        if(c=='+')
            f=true;
            if(f)
                cout<<p<<" + "<<q<<" = "<<x+y<<endl;
            else cout<<p<<" - "<<q<<" = "<<x-y<<endl;


    }
    return 0;
}

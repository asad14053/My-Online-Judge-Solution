#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    while(cin>>a>>b>>c)
    {
        d=a;
        d+=b;
        sort(d.begin(),d.end());
        sort(c.begin(),c.end());
        if(c==d)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

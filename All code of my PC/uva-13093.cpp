#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d,e,f;
    while(getline(cin,a))
    {
        stringstream ss(a);
       string b,c="",d="";
       while(ss>>b)
       {
           c+=b[0];
       }
       cout<<c<<endl;
       getline(cin,a);
       stringstream s(a);
       while(s>>b)
       {
           d+=b[0];
       }
       cout<<d<<endl;
       if(c==d)
        cout<<"yes"<<endl;
       else cout<<"no"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a)
    {
        b=a;
        reverse(a.begin(),a.end());
        if(a==b)
            cout<<"yes"<<endl;
            else
        cout<<"no"<<endl;
        a=b="";
    }
    return 0;
}


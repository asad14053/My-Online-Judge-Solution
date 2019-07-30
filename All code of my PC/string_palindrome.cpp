#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a)
    {
        for(int i=a.size()-1; i>=0; i--)
            b+=a[i];
        if(a==b)
            cout<<"p"<<endl;
        else cout<<"n p"<<endl;
        a=b="";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t;
    while(cin>>t)
    {
        cin>>a>>b>>c;
        if(a+b>=c and a+c>=b and b+c>=a and b+a>=c)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

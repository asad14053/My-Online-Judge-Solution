#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {cin>>a>>b;
        if((b-a)<=6 and b!=a and b>a)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

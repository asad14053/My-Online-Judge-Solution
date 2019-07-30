#include<bits/stdc++.h>
using namespace std;
int main()
{

    int b[1000],n,t,s;
    string a;
    while(cin>>t>>n,t,n)
    {
        for(int i=0;i<t;i++)
        {
            cin>>a>>b[i];
        }
        s=0;
        for(int i=0;i<t;i++)
        {
            if(b[i]%n>s) s=b[i]%n;
        }
        cout<<s<<endl;
    }
    return 0;
}

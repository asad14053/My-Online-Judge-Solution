#include<bits/stdc++.h>
using namespace std;
int main()
{
    long a,b,c;
    while(cin>>a>>b>>c)
    {

        if((a+b)<c )
            cout<<2*(a+b)<<endl;
       else if((a+c)<b )
            cout<<2*(a+c)<<endl;
       else if((c+b)<a )
            cout<<2*(c+b)<<endl;
        else
            cout<<a+b+c<<endl;

    }

    return 0;
}

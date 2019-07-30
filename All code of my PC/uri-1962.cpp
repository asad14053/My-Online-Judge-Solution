#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a>=2015)
            cout<<a-2014<<" A.C."<<endl;
        else
            cout<<2015-a<<" D.C."<<endl;


    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int c=0;
        if(!t) break;
        while(t--)
        {
            int a,b;
            cin>>a>>b;
            if(a<=b) c++;

        }
        cout<<c<<endl;

    }
    return 0;
}

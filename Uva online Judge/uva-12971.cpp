#include<bits/stdc++.h>
using namespace std;
int main()
{
    long a,b;
    while(cin>>a>>b)
    {
        int x=0,y=0;
        int c=1;
        while(1)
        {
        if((x-y)>=a) break;
        c++;
        x+=b;y+=a;
        }
        cout<<c<<endl;


    }
    return 0;
}

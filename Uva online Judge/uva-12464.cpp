#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    while(cin>>a>>b>>c)
    {
        if(!a && !b && !c)  break;
        c=c%5;
        if(c==0)
            cout<<a<<endl;
        else if(c==1)
            cout<<b<<endl;
        else if(c==2)
            cout<<(b+1)/a<<endl;
        else if(c==3)
            cout<<(a+b+1)/(a*b)<<endl;
        else if(c==4)
            cout<<(a+1)/b<<endl;
    }
    return 0;
}

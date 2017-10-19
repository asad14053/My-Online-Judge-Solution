#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,u,d,f,ht,c;
    while(cin>>h>>u>>d>>f && h)
    {
        ht=c=0;
        f=f*u/100;
        while(1)
        {
            c++;
            if(u>0)ht+=u;
            u-=f;
            if(ht>h) break;
            ht-=d;
            if(ht<0) break;
        }
        if(ht>=0) cout<<"success on day "<<c<<endl;
        else cout<<"failure on day "<<c<<endl;
    }
    return 0;
}

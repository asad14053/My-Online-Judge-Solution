#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h,u,d,f;
    while(cin>>h>>u>>d>>f && h)
    {
        f=f*u/100;
        double ht=0.0;
        int cnt=0;
        while(1)
        {
            cnt++;
            if(u>0) ht+=u;
            u-=f;

            if(ht>h) break;
            ht-=d;
            if(ht<0) break;

        }
        if(ht>=0) cout<<"success on day "<<cnt<<endl;
        else cout<<"failure on day "<<cnt<<endl;
    }
    return 0;
}


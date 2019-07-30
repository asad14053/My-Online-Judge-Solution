#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    bool n=false;
    string a[100];
    while(cin>>t,t)
    {
        if(n)cout<<endl;
        else n=!n;
        int l=-2;
        for(int i=0;i<t;i++)
        {
            cin>>a[i];
            int s=a[i].size();
           // cout<<a[i].size()<<endl;
            if(s>l) l=s;

        }
        for(int i=0;i<t;i++)
        {int m=l-a[i].size();
           // for(int j=1;j<=();j++)
            cout<<setw(l);
            cout<<a[i]<<endl;
        }
       // cout<<endl<<endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n,m,y;
        cin>>s>>n;
        bool f=false;
        for(int i=0;i<n;i++)
        {
            y=0;

            cin>>m;
            if(!f)
            for(int j=0;j<s.size();j++)
            y=y*10+s[j]-'0',y%=m;
            if(y)
                f=true;
        }
            if(f)
                cout<<s<<" - Simple."<<endl;
            else
                cout<<s<<" - Wonderful."<<endl;




    }
}

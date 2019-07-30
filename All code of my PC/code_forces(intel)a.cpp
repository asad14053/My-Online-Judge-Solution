#include<bits/stdc++.h>
using namespace std;
string s[]={"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
int month[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
vector<int>v;
int m(int x)
{
    v.push_back(x);
    for(int i=1;i<12;i++)
    {
        /// cout<<x<<endl;
         x=(x+month[i])%7;
        v.push_back(x);
    }
}
int main()
{
    string s1,x;
    while(cin>>s1>>x)
    {
        v.clear();
        for(int i=0;i<7;i++)
        {
            if(s1==s[i])
                m(i);
        }
        bool f=false;
           for(int i=0;i<11;i++)
           {
               if(s[v[i]]==s1 and s[v[i+1]]==x)
               {
                   f=true;
                   break;
               }

           }
           if(f)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

    }
    return 0;
}

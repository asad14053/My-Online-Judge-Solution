#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        string s;
        while(t--)
        {
            cin>>s;
            for(int i=0;i<s.size();i++)
            {
               // cout<<tolower(s[i])<<endl;
                if(s[i]>96)
                    s[i]=toupper(s[i]);
                else s[i]=tolower(s[i]);
            }
            cout<<s<<endl;
        }
    }
    return 0;
}

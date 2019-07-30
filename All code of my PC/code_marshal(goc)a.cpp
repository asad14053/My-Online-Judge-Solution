#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,x="",t="";
        cin>>s;
        int m=0;
        for(int i=0; i<s.size(); i++)
        {
            //cout<<isalpha(s[i])<<endl;
            if(s[i]>='a' and s[i]<='z')
            t+=s[i];
            else
            {
                m=s[i]-'0';
               // m-=1;
               // cout<<m<<endl;
                for(int j=1;j<m-1;j++)
                {
                    t+=t;
                }
            }

        }
        cout<<t<<endl;

    }

    return 0;
}

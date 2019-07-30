#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    while(cin>>n>>s)
    {
        vector<string>v,v1;
        for(int i=0; i<n; i++)
        {

            string t="";
            if(s[i]=='(')
            {
                i++;
                while(i<n)
                {
                    if(s[i]=='_' || s[i]==')')
                    {
                        i++;
                        v.push_back(t);
                        t="";
                        // cout<<t<<endl;
                    }
                    t+=s[i];
                    //cout<<t<<endl;
                    i++;
                }
            }
        }
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
}

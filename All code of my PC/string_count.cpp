#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        char b[100];
        map<char,int>mp;
        int k=0;
        for(int i=0; i<s.size(); i++)
        {
            if(!mp[tolower(s[i])])
                b[k++]=tolower(s[i]);
            mp[tolower(s[i])]++;
        }
        //cout<<mp.size()<<endl;
        int l=0;
        for(int i=0; i<mp.size(); i++)
        {
            cout<<b[i]<<"="<<mp[b[i]];
            if(l<mp.size()-1)
            {
                cout<<",";
                    l++;
            }
        }
        cout<<endl;
    }
        return 0;
    }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    vector<int>a(26),b(26);
    cin>>s>>t;
    for(int i=0; i<s.size(); ++i)
    {
        a[s[i]-'a']++;
    }
    for(int i=0; i<t.size(); ++i)
    {
        b[t[i]-'a']++;
    }
    int j=0;
    for(int i=0; i<s.size(); ++i)
    {
        if(j<t.size() && t[j]==s[i])
            j++;
    }
    if(j==t.size())
    {
        cout<<"automaton"<<endl;
        return 0;
    }
    if(a==b)
    {
        cout<<"array"<<endl;
        return 0;
    }
    for(int i=0; i<26; ++i)
    {
        if(a[i]<b[i])
        {
            cout<<"need tree"<<endl;
            return 0;
        }
    }
    cout<<"both"<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        stack<char>a;
        getline(cin,s);
        int l=s.size();
        for(int i=0; i<l; i++)
        {
            if(!a.empty()and s[i]==')'and a.top()=='(')
                a.pop();
            else if(!a.empty() and s[i]==']'and a.top()=='[')
                a.pop();
            else a.push(s[i]);
        }
        if(a.empty())
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

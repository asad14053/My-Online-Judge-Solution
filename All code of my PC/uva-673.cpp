#include<bits/stdc++.h>
using namespace std;
int main()
{
    int kk=1, tc, n, m;
    string s;
    cin>>tc;
    getline(cin, s);
    while(tc--)
    {
        getline(cin, s);
        int sl=s.size();
        stack<char>stk;
        for(int i=0;i<sl;i++)
        {
            if(!stk.empty() && s[i]==')' && stk.top()=='(')
                stk.pop();
            else if(!stk.empty() && s[i]==']' && stk.top()=='[')
                stk.pop();
            else stk.push(s[i]);
        }
        if(stk.empty())
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

        //cout<<"Case "<<kk++<<": "<< <<"\n";
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,st;
    while(cin>>s)
    {
        st="";
        int k=0,ans=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='<' or s[i]=='(' or s[i]=='[' or s[i]=='{')
                st[k++]=s[i];
            if(s[i]=='>' or s[i]==')' or s[i]==']' or s[i]=='}')
            {
                k--,ans++;
                if(st[k]=='<'&&s[i]=='>')ans--;
                if(st[k]=='['&&s[i]==']')ans--;
                if(st[k]=='{'&&s[i]=='}')ans--;
                if(st[k]=='('&&s[i]==')')ans--;
            }
        }
        if(k!=0)printf("Impossible\n");
        else printf("%d\n",ans);

    }
    return 0;
}

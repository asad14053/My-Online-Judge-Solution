#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s,x;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int l=s.size();
        int j=0;
        for(int i=0; i<l; i++)
            if(s[i]=='.')
            {
                j=i;
                if(s[l-j-1]=='.')
                    s[i]='a';
                else s[i]=s[l-j-1];
            }
        x=s;
        reverse(s.begin(),s.end());
        if(x==s)
            cout<<x<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}

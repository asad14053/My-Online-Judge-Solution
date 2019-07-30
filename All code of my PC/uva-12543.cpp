#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    int m=0,c,j;
    while(cin>>s)
    {    c=0;
        if(s=="E-N-D") break;
        for(int i=0;i<s.size();i++)
        { j=0;
            if(isalpha(s[i])||s[i]=='-')
                {
                    c++;
                }
        }
        if(c>m)
        {
            r=s;
            m=c;
        }
    }
         for(int i=0;i<r.size();i++)
        if(isalpha(r[i]) || r[i]=='-')
        {
            if(r[i]>='A' && r[i]<='Z')  r[i]=r[i]-'A'+'a';
            cout<<r[i];
        }
    cout<<endl;




    return 0;
}

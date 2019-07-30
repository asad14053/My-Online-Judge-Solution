#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,x,y,z,n;
    string s,s1,s2;
    cout<<"message : ";
    while(cin>>s)
    {
        s1="";
        for(int i=0; i<s.size(); i++)
        {
            if(isupper(s[i]))
                s1+=char(((s[i]-'A'+3)%26)+'A');
                else    s1+=char(((s[i]-'a'+3)%26)+'a');
        }
        cout<<"encrypted message :"<<s1<<endl;
        s2="";
         for(int i=0; i<s1.size(); i++)
         {
             if(isupper(s1[i]))
             {
                 x=(s1[i]-'A'-3);
                 if(x<0) x+=26;
                 s2+=char(x+'A');
             }
             else
             {
                 x=(s1[i]-'a'-3);
                 if(x<0) x+=26;
                 s2+=char(x+'a');
             }

         }
           cout<<"decrypted message :"<<s2<<endl;

    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a>b?a:b)
int main()
{
   // fast();
    //  input();
    //  output();
    string s;
    while(cin>>s)
    {
        int co=-1,mx=-1,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U' or s[i]=='Y')
               {
                   mx=max(mx,i-co);
                   co=i;c++;
               }

        }
        if(!c)
        {cout<<s.size()+1<<endl;
          continue;
        }
        if(co!=(s.size()-1))
            mx= max(s.size()-co,mx);
        cout<<mx<<endl;
    }

return 0;
}



//XABCEIUZMLLLLLL

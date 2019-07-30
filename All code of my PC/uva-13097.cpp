#include<bits/stdc++.h>
using namespace std;
typedef long long ull;
int main()
{
    ull a,b;
    char c;
    while(cin>>a>>b>>c)
    {
        b%=a;
        getchar();
        string s1,s2,s3,s="";
        char s4[50009];
        getline(cin,s1);
        getline(cin,s2);
        getline(cin,s3);
        for(int i=0;i<s2.size();i++)
            if(s2[i]!='|')
            s+=s2[i];
            int l=s.size();
         if(c =='R')
         for(int i=0;i<l;i++)
         {

                 s4[(i+b)%l]=s[i];
         }
          else
          for(int i=0;i<l;i++)
          {if((i-b)<0)
            s4[(i-b)+l]=s[i];
            else s4[(i-b)]=s[i];
          }

         s4[l]='\0';

        cout<<s1<<endl;
        int k=0;
        for(int i=0;i<2*a+1;i++)
            if(i%2==0)
            cout<<"|";
        else
        cout<<s4[k++];
        cout<<endl;
        cout<<s3<<endl;
    }


return 0;
}

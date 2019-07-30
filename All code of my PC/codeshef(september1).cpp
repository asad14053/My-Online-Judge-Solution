#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n;
   cin>>t;
   string s;
  // vector<string>v(t+2);
   while(t--)
   {
       cin>>s;
       int l=s.size();
       int c=0;
       for(int i=0;i<l;i++)
        if(s[i]=='1')
        c++;
        if( c==l-1 or c==1)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
   }
    return 0;
}

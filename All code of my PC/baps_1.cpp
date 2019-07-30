#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    int i=1;
    while(t--)
    {
      cin>>n;
      string s;
      map<string,int>mp;
       vector<string>v;
      for(int i=0;i<n;i++)
      {
        cin>>s;
        v.push_back(s);
        mp[s]++;
      }
      int mx=-1;
      string x;
       for(int i=0;i<n;i++)
       {
           if(mp[v[i]]>mx)
           {mx=mp[v[i]];
             x=v[i];
           }
       }
       cout<<"Case "<<i++<<": "<<x<<endl;
    }
    return 0;
}

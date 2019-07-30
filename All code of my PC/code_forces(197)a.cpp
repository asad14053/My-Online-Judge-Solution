#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
 while(cin>>s)
 {
     int x;
     vector<int>v;
     stringstream ss(s);
     while(ss>>x)
     {
         v.push_back(x);
     }
     sort(v.begin(),v.end());
     int l=v.size();
     if(l>0)
        cout<<v[0];
     for(int i=1;i<l;i++)
        cout<<"+"<<v[i];
     cout<<endl;
 }
    return 0;
}

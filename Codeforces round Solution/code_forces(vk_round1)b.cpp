#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>v;
    int n;
    string s;
    map<string,bool>mp;
    while(cin>>n)
    {
        v.clear();
        mp.clear();
        for(int i=0;i<n;i++)
        {
            cin>>s;
            v.push_back(s);
        }
       // map<string,bool>mp;
        int i=n-1;
        while(i>=0)
        {
            if(!mp[v[i]])
            {cout<<v[i]<<endl;
            mp[v[i]]=1;
            }
            i--;
        }
    }
    return 0;
}

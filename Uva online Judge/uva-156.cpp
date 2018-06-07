#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    vector<string>v;
    map<string,pair<string,int> >mp;
    map<string,pair<string,int> >::iterator it;
    while(cin>>s)
    {
        if(s=="#")
            break;
        x=s;
        for(int i=0; i<s.size(); i++)
            x[i]=tolower(x[i]);
        sort(x.begin(),x.end());
        mp[x].first=s;
        mp[x].second++;
    }
    for(it=mp.begin(); it!=mp.end(); it++)
        if((*it).second.second==1)
            v.push_back((*it).second.first);
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<endl;
    return 0;
}

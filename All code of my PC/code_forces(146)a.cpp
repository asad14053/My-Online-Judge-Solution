#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int l=s.size();
        int c=0;
        map<char,int>mp;
        for(int i=0;i<l;i++)
        {
            if(!mp[s[i]])
            {
                mp[s[i]]++;
            }
        }
        if(mp.size()%2)
        cout<<"IGNORE HIM!"<<endl;
        else cout<<"CHAT WITH HER!"<<endl;

    }
    return 0;
}

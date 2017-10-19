#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<string>s;
        map<string,int>mp;
        string a;
        string b;
        getchar();
        for(int i=0;i<n;i++)
            {
                cin>>a;
                getline(cin,b);
                if(mp[a])
                    mp[a]++;
                else
                {
                    mp[a]++;
                    s.push_back(a);
                }
            }
            sort(s.begin(),s.end());
            for(int i=0;i<s.size();i++)
                cout<<s[i]<<" "<<mp[s[i]]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        map<string,double>mp;
        cin>>n;
        vector<string>v1,v2;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            v1.push_back(s);
        }
        for(int i=0; i<n; i++)
        {
            cin>>s;
            double l=s.size(),c=0,c1=0;
            for(int j=0; j<s.size(); j++)
            {
                if(s[j]=='P')
                    c++;
                if(s[j]=='A')
                    c1++;
            }
            mp[v1[i]]=c/(c+c1);

        }
        // for(int i=0;i<n;i++)
        //  if(mp[v1[0]]<.75)
        // cout<<v1[0];
        bool f=false;
        for(int i=0; i<n; i++)
        {

            if(mp[v1[i]]<0.75)
            {
                if(f) cout<<" ";
                cout<<v1[i];
                f=true;
            }
        }
        cout<<endl;

    }
    return 0;
}

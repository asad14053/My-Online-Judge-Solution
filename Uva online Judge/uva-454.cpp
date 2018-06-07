#include<bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    string s,x,m,l;
    int n;
    cin>>n;
    getline(cin,x);
    getline(cin,x);
    while(n--)
    {
        //cout<<endl;
        map<string,string>mp;
        vector<string>v;
        while(getline(cin,x))
        {
            if(x=="")
                break;
            s="";
            v.push_back(x);
            stringstream ss(x);
            while(ss>>l)
                s+=l;
            sort(s.begin(),s.end());
            //cout<<s<<endl;
            mp[x]=s;

        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size()-1; i++)
            for(int j=i+1; j<v.size(); j++)
                if(mp[v[i]]==mp[v[j]])
                    cout<<v[i]<<" = "<<v[j]<<endl;
        if(n)
            cout<<endl;
    }
    return 0;
}

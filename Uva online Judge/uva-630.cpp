#include<bits/stdc++.h>
using namespace std;
int main()
{
   //  freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    string s,x,l;
    int n,m;
    cin>>n;
    getchar();
    while(n--)
    {
        //cout<<endl;
        map<string,string>mp;
        vector<string>v;
        int t;
        cin>>t;
        m=t;
        getchar();
        while(t--)
        {
            getline(cin,x);
            v.push_back(x);
            s=x;
            sort(s.begin(),s.end());
            mp[x]=s;

        }
        string ss,z;
        while(cin>>ss)
        {
            if(ss=="END")
                break;
            int o=0;
            cout<<"Anagrams for: "<<ss<<endl;
            z=ss;
            vector<string>v1;
            sort(z.begin(),z.end());
            for(int i=0;i<v.size();i++)
                if(z==mp[v[i]])
                    v1.push_back(v[i]);
                for(int i=0;i<v1.size();i++)
                cout<<"  "<<i+1<<") "<<v1[i]<<endl;
               if(!v1.size())
               cout<<"No anagrams for: "<<ss<<endl;
                //else cout<<endl;
        }
        if(n)
         cout<<endl;
    }
    return 0;
}


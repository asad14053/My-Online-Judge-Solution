#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,m;
    while(cin>>k)
    {
        if(!k)
            break;
        cin>>m;
        map<string,int>mp;
        string s;
        bool f=true;
        while(k--)
        {
            cin>>s;
            mp[s]++;
        }
        map<int,bool>mx;
        while(m--)
        {
            int c,r;
            cin>>c>>r;
            int co=0;
            while(c--)
            {
                cin>>s;
                if(mp[s])
                    co++;
            }
          //  cout<<"=="<<co<<endl;
            if(co>=r)
                f=f&true;
            else f=f&false;
        }
        if(f)
            cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}

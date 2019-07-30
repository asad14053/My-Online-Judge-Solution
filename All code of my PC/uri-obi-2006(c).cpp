#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n;
    while(cin>>t>>n)
    {
        ll d=0,e=0,f=0,x;
        map<char,ll>mp;
        mp['D']=t,mp['E']=t,mp['F']=t;
        while(n--)
        {
            char c,v,s;
            cin>>c;
            if(c=='C')
                {
                    cin>>v>>x;
                    mp[v]-=x;
                }
            else if(c=='V')
            {
                cin>>v>>x;
                mp[v]+=x;

            }
            else if(c=='A')
            {
                cin>>v>>s>>x;
                mp[v]+=x;
                mp[s]-=x;
            }
        }
        if(mp['D']<0)
            mp['D']=0;
            if(mp['E']<0)
            mp['E']=0;
            if(mp['F']<0)
            mp['F']=0;
            cout<<mp['D']<<" "<<mp['E']<<" "<<mp['F']<<endl;

    }
    return 0;
}

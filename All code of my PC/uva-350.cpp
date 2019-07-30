#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long z,i,m,l,k=1,s=0,c;
    while(cin>>z>>i>>m>>l and z and i and m and l)
    {
        c=0,s=0;
        map<long long ,int>mp;
        long long h=l;
        while(1)
        {
            l=(z*l+i)%m;
            // cout<<s<<endl;
             mp[l]++;
            if(mp[l]==2) break;
            c++;
            // cout<<c<<"----"<<endl;
        }

        cout<<"Case "<<k++<<": "<<c<<endl;


    }
    return 0;
}


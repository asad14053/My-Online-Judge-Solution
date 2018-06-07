#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    long long k;
    string a;
    cin>>m>>n;
    map<string,long long>mp;
    while(m--)
    {
        cin>>a>>k;
        mp[a]=k;
    }

    while(n--)
    {
        long long s=0;
        while(cin>>a,a!=".")
        {
            if(mp.find(a)!=mp.end())
                s+=mp[a];
        }
        cout<<s<<endl;
    }

    return 0;
}

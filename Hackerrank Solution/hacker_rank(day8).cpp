#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,long>mp;
    int n;
    long b;
    string s;
    cin>>n;
    while(n--)
    {
     cin>>s>>b;
     mp[s]=b;
    }
    while(cin>>s)
    {
        cout<<mp[s]<<endl;
    }
    return 0;
}

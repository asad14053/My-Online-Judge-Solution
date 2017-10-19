#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        vector<int>v;
        int v1[n+2];
        map<int,int>mp;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        int c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(!mp[v[i]])
            {
                c++;
                mp[v[i]]=1;
            }
             v1[i]=c;
        }
       // reverse(v1.begin(),v1.end());
        for(int i=0;i<m;i++)
        {
            cin>>x;
            cout<<v1[x-1]<<endl;
        }

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    while(cin>>n)
    {
        int a[n+2];
        map<int ,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
        }
        int s=0;
        for(int i=0;i<=100;i++)
            s+=mp[i]/2;
            cout<<s<<endl;
    }

    return 0;
}

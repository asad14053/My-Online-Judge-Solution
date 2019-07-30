#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a;
        int mp[101]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a;
            mp[a]++;
        }
        int l=0;
        sort(mp,mp+100,greater<int>());
        for(int i=1;i<101;i++)
            l+=mp[i];
            cout<<l<<endl;
    }

    return 0;
}

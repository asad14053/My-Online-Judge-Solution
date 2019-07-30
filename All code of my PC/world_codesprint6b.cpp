#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        vector<int>v1,v2;
        int x;
        for(int i=0;i<5;i++)
        {
            cin>>x;
            v1.push_back(x);
        }
        for(int i=0;i<5;i++)
        {
            cin>>x;
            v2.push_back(x);
        }
        int sum=0;
        for(int i=0;i<5;i++)
        {
            int l=abs(v2[i]-v1[i]);
            int x=min(l,10-l);
            sum+=x;
        }
        cout<<sum<<endl;
    }
    return 0;
}

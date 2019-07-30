#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a,b;
    vector<int>v;
    while(cin>>n)
    {
        v.clear();
        for(int i=0;i<n-1;i++)
        {
            cin>>x;
            v.push_back(x);
        }
     //   sort(v.begin(),v.end());
        cin>>a>>b;
        int j=0,s=0;
        for(int i=a-1;i<b-1;i++)
        {
            s+=v[i];
        }
        cout<<s<<endl;
    }
    return 0;
}

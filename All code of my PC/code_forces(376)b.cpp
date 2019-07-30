#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,x;
    while(cin>>n)
    {
        v.clear();
          bool f=1;
        for(int i=0;i<n;i++)
        {
           cin>>x;
           v.push_back(x);
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            if(v[i]%2)
            {
                if(i==n-1)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                v[i+1]--;
            }
        }
         cout<<"YES"<<endl;
    }
    return 0;
}

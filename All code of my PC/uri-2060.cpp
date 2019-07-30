#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {   map<int,int>mp;
        int a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
            for(int i=2;i<=5;i++)
            {
               // cout<<"--"<<endl;
                for(int j=0;j<n;j++)
                if(a[j]%i==0)
                    mp[i]++;
            }
            for(int i=2;i<=5;i++)
                cout<<mp[i]<<" Multiplo(s) de "<<i<<endl;

    }
    return 0;
}

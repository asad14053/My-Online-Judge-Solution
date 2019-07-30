#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int mx=INT_MIN,mn=INT_MAX,mi=0,mj=0,x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(mx<x)
            {
                mx=x;
                mi=i;
            }
            if(mn>=x)
            {
                mn=x;
                mj=i;
            }
        }
       // cout<<mi<<" "<<mj<<endl;
        cout<<(n-1-mj)+mi-(mi>mj)<<endl;
    }
    return 0;
}

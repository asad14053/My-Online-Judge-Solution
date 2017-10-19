#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    vector<int>v;
    int k,r;
    while(cin>>k>>r)
    {
        int i=1;
        while(((k*i)%10)%r!=0 || (k*i)%10!=r)
        {
               if((k*i)%10==0)
                break;
           // cout<<k<<endl;
            i++;
        }
        cout<<i<<endl;
    }
    return 0;
}

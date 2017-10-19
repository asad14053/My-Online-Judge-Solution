#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a,p;
    while(cin>>n)
    {
        a=0;
        p=0;
        map<int,bool>mp;
        for(int i=0; i<n; i++)
        {
            cin>>t;
            mp[t]=true;
        }
        int i=1;
        while(i<=90)
        {

            if(!mp[i])
                p++;
            else p=0;
            if(p==15)
            {
                a=i;
                break;
            }
            i++;
           // cout<<a<<" ";
        }
        i--;
        if(!a)
            a=i;
        cout<<a<<endl;
    }
    return 0;
}

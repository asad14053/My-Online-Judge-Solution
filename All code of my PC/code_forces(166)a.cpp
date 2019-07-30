#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        n+=1;
        int x=n,c=0;
        while(x<=9050)
        {
            c=0;
            map<int,int>mp;
            for(int i=1; i<=4; i++)
            {
                int p=n%10;
                n/=10;
                if(mp[p])
                {
                    x++;
                    break;
                }
                else ++c;
                mp[p]=true;
            }
            if(c==4)
                break;
            // cout<<x<<endl;
            n=x;
        }
        if(c==4)
            cout<<x<<endl;
    }
    return 0;
}

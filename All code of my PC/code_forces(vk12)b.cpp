#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    while(cin>>n)
    {
        vector<long long>v;
        map<long long,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
            mp[x]++;

        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int x=4,c=0;
        bool f=0;
        for(int i=0; i<n; i++)
        {
            if(mp[v[i]]==n)
            {
                    if(v[i]==1)
                    {
                        if(n>4)
                    cout<<n/4+n%4<<endl;
                        else cout<<1<<endl;
                    }
                    else if(v[i]==2)
                    {
                        cout<<n/2+n%2<<endl;
                    }
                    else
                    cout<<n<<endl;
                    f=1;
                    break;
            }
            if(v[i]==4)
                c++,mp[4]--;
            else if(v[i]==3 and mp[3]>0)
            {
                if(mp[1]>0)

                    mp[1]--;
                    mp[3]--;
                    c++;
            }
            else if(v[i]==2 and mp[2]>0)
            {
                if(mp[2]>=2)
                mp[2]-=2;
                else if(mp[2]>0)
                {
                    if(mp[1]>1)
                    {
                        mp[1]-=2;
                    }
                    else if(mp[1]>0)

                        mp[1]--;
                }
                c++;
            }
            if(v[i]==1 and mp[1]>0)
            {
                if(mp[1]>=4)
                    mp[1]-=4;
                if(mp[1]>=2)
                    mp[1]-=2;
                if(mp[1]>0)
                   mp[1]--;
                c++;
            }


        }
        if(!f)
        cout<<c<<endl;

    }
    return 0;
}

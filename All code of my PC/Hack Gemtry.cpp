#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll n,m,p,q,i,j,k,cnt;
    string s;
    vector<int>a,b,c;
    map<int,int>mp,mpa;
    while(cin>>n)
    {
        a.clear();
        b.clear();
        c.clear();
        mp.clear();
        mpa.clear();
        cin>>s;
        cnt=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='a')
            {
                a.push_back(i);
                mpa[i]=1;
            }
            else if(s[i]=='b') b.push_back(i);
            else
            {
                mp[i]=1;
                c.push_back(i);
            }
        }
        int szc = c.size(),sza=a.size(),szb = b.size();
        if(sza==0||szb==0||szc==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(sza<szc)
        {
            int kk=0;
            for(i=0; i<szb; i++)
            {
                p = (b[i]+1)*(b[i]+1);
                for(j=kk; j<sza; j++)
                {
                    if(p%(a[j]+1)==0)
                    {
                        q = p/(a[j]+1);
                        if(q>0)
                        {
                            if(mp[q-1]==1) cnt++;
                            else
                            {
                                if(mp[a[j]+1]&&mpa[q]) cnt++;
                            }
                        }
                        kk=j;
                    }
                }
            }
        }
        else
        {
            int kk=0;
            for(i=0; i<szb; i++)
            {
                p = (b[i]+1)*(b[i]+1);
                for(j=kk; j<szc; j++)
                {
                    if(p%(c[j]+1)==0)
                    {
                        q = p/(c[j]+1);
                        if(q>0)
                        {
                            if(mpa[q-1]==1) cnt++;
                            else
                            {
                                if(mpa[c[j]+1]&&mp[q]) cnt++;
                            }
                        }
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
}


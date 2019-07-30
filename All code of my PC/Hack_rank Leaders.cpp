#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,cnt[100002],p,q,T,a[100002];
    cin>>T;
    map<int,int>mp;
    map<int,int>mp1;
    while(T--)
    {
        cin>>n;
        for(i=0; i<n; i++) cin>>a[i];
        cin>>m;
        while(m--)
        {
            int ind=1;
            mp.clear();
            mp1.clear();
            cin>>p>>q>>j;
            for(i=p; i<=q; i++)
            {
                if(mp[a[i]]==0)
                {
                    mp[a[i]]=ind;
                    mp1[ind]=a[i];
                    ind++;
                }
                cnt[mp[a[i]]]++;
            }
            int mn =100003,kk=0;
            for(i=1; i<ind; i++)
            {
                if(cnt[i]==j)
                {
                    kk=1;
                    mn=min(mn,mp1[i]);
                }
            }
            if(kk) cout<<mn<<endl;
            else cout<<-1<<endl;
            for(i=1; i<ind; i++) cnt[i]=0;
        }
    }
}

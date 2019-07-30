#include<bits/stdc++.h>
using namespace std;

#define fr(i,a,b) for(int i=(a);i<(b);i++)
#define rfr(i,a,b) for(int i=(b-1);i>=(a);i--)
#define freach(i, c) for( __typeof( (c).begin() ) i = (c).begin(); i != (c).end(); ++i )
#define rep(i,n) for(int i=0;i<(n);i++)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)
typedef long long ll;
int main()
{
  //  fast();
     // input();
    //  output();
    ll aa,b;
    map<ll,ll>mp;
    while(cin>>aa>>b)
    {
        mp.clear();
        ll a[b+2];
        rep(i,b)
        cin>>a[i],mp[a[i]]=i+1;
        ll c1=0;ll c2=0;
        for(int i=0;i<b;i++)
        {int j;
            for( j=2;j<=aa/2;j++)
            {
                if(a[i]%j==0)
                {
                    if(mp[a[i]] and mp[j] and(a[i]!=j))
                    {
                        c1=mp[a[i]];
                        c2=mp[j];
                       // bug(c2);bug(c1);
                        if(c1==c2) continue;
                       // break;
                    }
                }
            }
           // if(mp[a[i]]!=mp[j])
           //     break;
        }
        cout<<c1<<" "<<c2<<endl;
    }
return 0;
}




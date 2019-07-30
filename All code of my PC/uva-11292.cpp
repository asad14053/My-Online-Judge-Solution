#include<bits/stdc++.h>
using namespace std;
#define MAX 200007
int main()
{
    long long g[MAX],k[MAX],n,m;
    while(cin>>n>>m)
    {
        memset(g,-1,sizeof(g));
         memset(k,-1,sizeof(k));

        for(int i=0;i<n;i++ )
            cin>>g[i];
             for(int j=0;j<m;j++ )
            cin>>k[j];
            sort(g,g+n);
            sort(k,k+m);
             for(int i=0;i<m;i++ )
            cout<<k[i];
            k[m]=-1;
            long long j=0,ans=0,cnt=0;
           for(int i=0;i<n;i++)
           {

               int c=g[i];
               while(k[j]<c and j<m) j++;
               if(k[j]>=c) ans+=k[j],cnt++;
               j++;
               if(j>=m) break;
           }
           if(cnt==n) cout<<ans<<endl;
           else cout<<"Loowater is doomed!"<<endl;

    }



    return 0;
}

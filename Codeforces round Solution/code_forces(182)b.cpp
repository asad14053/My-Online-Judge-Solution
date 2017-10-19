#include<bits/stdc++.h>
using namespace std;
typedef int ll;
int main()
{
    ll n,m,x,y;
    while(cin>>n>>m)
    {
        ll a[n+2]={0};
        for(int i=1; i<=n; i++)
        {
            scanf("%d%d",&x,&y);
            a[i]+=a[i-1]+x*y;
          //  cout<<a[i]<<endl;
        }
        ll xx;int j=1;
        for(int i=1; i<=m; i++)
        {

            scanf("%d",&xx);
            while(a[j]<xx)
                j++;
           printf("%d\n",j);
        }

    }
    return 0;
}

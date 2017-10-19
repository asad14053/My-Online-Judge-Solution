#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[5000],i,j,k,r,s,p=500000,n,d,m;
    while(cin>>n)
    {
        for(j=1; j<=n; j++)
        {
            cin>>r;
            for(i=1; i<=r; i++)
                cin>>a[i];
            sort(a,a+r+1);
            for(i=1; i<=r; i++)
            {
                d=0;
                for(k=1; k<=r; k++)
                    d+=abs(a[i]-a[k]);
                if(i==1)m=d;
                if(d<m) m=d;
            }

            cout<<m<<endl;

        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sz,i,j,h,t,p,q,n,T,a[105];

    cin>>T;
    while(T--)
    {
        cin>>n;
        h=0;
        t=0;
        for(i=0;i<n;i++) cin>>a[i];
        if(n%2==0||a[0]!=1) cout<<"no"<<endl;
        else
        {
            j=0;
            for(i=0;i<n/2;i++)
            {
               p = a[i+1]-a[i];
               if(p!=1)
               {
                   j=1;
                   break;
               }
            }
            for(i=n/2;i<n-1;i++)
            {
                p = a[i]-a[i+1];
                if(p!=1)
                {
                    j=1;
                   break;
                }
            }
            if(j==0) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
    }
}


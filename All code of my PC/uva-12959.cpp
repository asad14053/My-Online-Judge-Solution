#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r;
    while(cin>>n>>r)
    {int a[n*r+2];
        for(int i=0; i<n; ++i)
            cin>>a[i];
        for(int i=1; i<r; ++i)
            for(int j=0; j<n; ++j)
            {
                int x;
                cin>>x;
                a[j]+=x;
                //cout<<a[j]<<endl;
            }
        int mx=a[0],l=1;
       // for(int i=0; i<n; i++)
          //  cout<<a[i]<<endl;
        for(int i=1; i<n; ++i)
            if(a[i]>=mx)
            { l=i+1;
                mx=a[i];

            }
            cout<<l<<endl;
    }
    return 0;
}

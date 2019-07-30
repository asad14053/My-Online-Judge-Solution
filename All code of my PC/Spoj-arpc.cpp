#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,p[1000],q[1000],j,i;
    int x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            cin>>p[i];
        cin>>m;
        for(i=0; i<m; i++)
            cin>>q[i];
        x=1000000;

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                y=q[i]-p[j];
                if(y<0)
                    y=y*(-1);
                if(y<x)
                    x=y;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}

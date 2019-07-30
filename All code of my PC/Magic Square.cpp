#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,p,q,sm,a[20][20],k,l;
    while(cin>>n)
    {
        sm=0;
        for(i=0; i<n; i++) for(j=0; j<n; j++) a[i][j]=0;
        a[0][(n-1)/2]=1;
        j=(n-1)/2;
        for(p=2; p<=n*n; p++)
        {
            if(i>=1) k=i-1;
            else k=n-1;
            if(j>=1) l=j-1;
            else l=n-1;
            if(a[k][l]>=1) i=(i+1)%n;
            else
            {
                i=k;
                j=l;
            }
            a[i][j]=p;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++) cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}


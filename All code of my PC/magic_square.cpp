#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[501][501],b[501][501];

    while(cin>>n)
    {
        memset(a,0,sizeof(a));
        //cout<<"sum :"<<n*(n*n+1)/2<<endl;
        int x=0,y=n/2;
        for(int i=1;i<=n*n;i++)
        {

            if(a[x][y])
            {
                x+=2;y--;
                if(x>=n) x-=n;
                if(y<0) y+=n;
                a[x][y]=i;
            }
            else
                a[x][y]=i;
            x--;y++;
            if(x<0) x+=n;
            if(y>=n) y-=n;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                if(a[p][n-q] and !b[p][q])
                    cout<<a[p][n-q]<<endl;
        }

    }
    return 0;
}

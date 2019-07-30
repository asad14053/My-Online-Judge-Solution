#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100][100],b[100][100],c[100][100];
    int x,y,m,n,i,j;
    cin>>x>>y>>m>>n;
    if(y==m)
       {

    for(  i=0; i<x; i++)
    {
        for(  j=0; j<y; j++)
            cin>>a[i][j];
            cout<<endl;
    }
    for(  i=0; i<m; i++)
    {
        for(  j=0; j<n; j++)
            cin>>b[i][j];
            cout<<endl;
    }
    for(  i=0; i<x; i++)
        for(  j=0; j<n; j++)
        {
            c[i][j]=0;
            for(int k=0; k<m; k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<n; j++)
            cout<<c[i][j]<<" ";
            cout<<endl;
    }
       }
    else cout<<"invalid"<<endl;
    return 0;
}

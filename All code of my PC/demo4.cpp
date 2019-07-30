#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,m,x,y,i,j,a[5],b[5];
    cin>>n>>m>>x>>y>>i>>j;
    a[0]=-i,a[1]=i,a[2]=-i,a[3]=i;
    b[0]=-j,b[1]=-j,b[2]=j,b[3]=j;
    int l=3;bool f=false;
    int c=0;
    while(true and l>=0)
    {
        x=x+a[l];
        y=y+a[l];
        if((x==1 and y==1)or (x==1 and y==m)or(x==n and y==1)or(x==n and y==m))
        {
            f=true;
            break;
        }
        l--;
        c++;
    }
    if(f)
        cout<<c<<endl;
    else cout<<"Poor Inna and pony!"<<endl;
    return 0;
}

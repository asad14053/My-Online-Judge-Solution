#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,u,m,a[1000],k,n,c;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    while(cin>>k)
    {
        c=0;
        l=0;u=n-1;m=(u+l)/2;
        while(u>=l)
        {
        if(k==a[m])
        {
             c=1;
             break;
        }
        else if(k<a[m])
            u=m-1;
        else if(k>a[m])
            l=m+1;
        m=(u+l)/2;
        }
        if(c==1)
            cout<<"value found, pos:"<<m+1<<endl;
        else
            cout<<"re-enter value"<<endl;
    }
    return 0;
}

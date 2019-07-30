#include<bits/stdc++.h>
using namespace std;
int linear(int a[ ],int n,int k)
{
    if(a[n]==k)
        return(n);
    linear(a,n-1,k);
}
int main()
{
    int n,a[100];
    cout<<"enter size:"<<endl;
    cin>>n;
    cout<<"enter array:"<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    int l,k=n;
    cout<<"enter key"<<endl;
    while(cin>>l)
    {
        int m=linear(a,n-1,l);
        if(m<0)
            cout<<"value not found"<<endl;
        else
            cout<<"value found: "<<m<<endl;
    }
    return 0;
}

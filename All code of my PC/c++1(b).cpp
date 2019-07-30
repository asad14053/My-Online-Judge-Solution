#include<bits/stdc++.h>
using namespace std;
int p(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}
int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    p(a,n);
    return 0;
}

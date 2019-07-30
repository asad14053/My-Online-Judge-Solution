#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a[102];
    cin>>n;
    if(n<1) return 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(int j=0;j<n;j++)
     for(int i=0;i<n;i++)
    {
    if(a[j]==a[i+1])
        ++c;
       //cout<<a[i]<<endl;
    }
    cout<<c/2<<endl;
    return 0;
}

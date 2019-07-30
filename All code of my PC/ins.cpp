#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        int k=a[i];
        int j;
        for(j=i-1;j>=0&&k<a[j];j--)
            a[j+1]=a[j];
          a[j+1]=k;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}

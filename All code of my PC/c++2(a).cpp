#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],n,*p,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    p=a;
    for(int i=0;i<n;i++)
    {
        sum+=*p;
        cout<<*p<<endl;
        p++;
    }
    cout<<"sum:"<<sum<<endl;
    return 0;
}

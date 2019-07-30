#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000];
    cout<<"enter size"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        int m=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[m])
                m=j;
        }
        swap(a[i],a[m]);
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;

    return 0;
}

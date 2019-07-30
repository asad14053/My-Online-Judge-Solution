#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<(n-1)-i; j++)
            if(a[j]<a[j+1])
                swap(a[j],a[j+1]);
        //}
        //  for(int j=0;j<n;j++)
        cout<<a[i]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],*p,n,max=-1,min=10000000;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    p=a;
    for(int i=0;i<n;i++)
    {
        cout<<*p<<endl;
        if(*p>max) max=*p;
        else if(*p<min) min=*p;
        p++;
    }
    cout<<max<<" "<<min<<endl;
    return 0;
}

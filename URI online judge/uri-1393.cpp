#include<bits/stdc++.h>
using namespace std;
int a[100];
void p()
{
    a[0]=a[1]=1;
    for(int i=2;i<=41;i++)
        a[i]=a[i-1]+a[i-2];
}
int main()
{
    p();
    int n;
    while(cin>>n,n)
    {
        cout<<a[n]<<endl;
    }

    return 0;
}

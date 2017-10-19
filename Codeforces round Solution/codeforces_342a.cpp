#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll n,a[3],b,c;
    cin>>n>>a[0]>>a[1]>>c;
    sort(a,a+2);
    if(a[1]>n)
        a[1]=a[0];
    ll s=0;
    while(n%a[1]==0)
    {   n/=a[1];
    s++;

    }
    if(s>=0)
        s+=8;
    if(s>=c)
        s++;
    cout<<s<<endl;

}

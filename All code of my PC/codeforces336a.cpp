#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#define ll long long int
using namespace std;
int main ()
{
    ll n,s,i,j;
    cin>>n>>s;
    ll a[n],b[n];
    for(i=0;i<n;i++) cin>>a[i]>>b[i];
    ll sum=0;
    for(i=n-1;i>=0;i--)
    {
        if(i==n-1) sum+=s-a[i];
        else sum+=a[i+1]-a[i];
        if(sum<b[i]) sum=b[i];
    }
    sum+=a[0]-0;
    cout<<sum<<endl;


    return 0;
}
/*

3 7
2 1
3 8
5 2
5 10
2 77
3 33
8 21
9 12
10 64



*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    long der[ 12 ] = { 0, 1, 2, 9, 44, 265, 1854, 14833, 133496, 1334961, 14684570, 176214841 };
    long fac [ 12 ]= { 1, 2, 6, 24, 120, 720,5040,40320,362880,3628800,39916800,479001600};
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<der[n-1]<<"/"<<fac[n-1]<<endl;
    }
    return 0;
    }

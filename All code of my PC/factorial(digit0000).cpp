#include<bits/stdc++.h>
using namespace std;

long long Z(long long n)
{
    long long N=n,z=0;
    while(n/5!=0)
    {
        z+=n/5;
        n=n/5;
    }
    return z;
}

int main()
{
    long long t,N;
    cin>>t;
    while(t--)
    {
        cin>>N;
        cout<<Z(N)<<endl;
    }
    return 0;
}


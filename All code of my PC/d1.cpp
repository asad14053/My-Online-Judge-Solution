#include<bits/stdc++.h>
using namespace std;
int t,p;
long i,n,b;
double f[1000010];
int main()
{
    cin>>t;
    for(i=1;i<=1000000;i++)
        f[i]=log((i))+f[i-1];
    for(p=1;p<=t;p++)
    {
        cin>>n>>b;
        cout<<"Case "<<p<<": "<<(long)(f[n]/(f[b]-f[b-1]))+1<<endl;
    }
    return 0;
}


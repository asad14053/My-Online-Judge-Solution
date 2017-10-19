#include<bits/stdc++.h>
using namespace std;
#define max 1000000
int ar[max+2];
int p(int n)
{
    if(ar[n]!=-1)
        return ar[n];
    int a=p((int)(n-sqrt(n)))%max;
    int b=p((int)(log(n)))%max;
    int c=p((int)(n*sin(n)*sin(n)))%max;
    ar[n]=(a+b+c)%max;
    return ar[n];
}
int main()
{
    int n;
    memset(ar,-1,sizeof(ar));
    ar[0]=1;
    while(cin>>n and n>=0)
    {
        cout<<p(n)<<endl;
    }
    return 0;
}

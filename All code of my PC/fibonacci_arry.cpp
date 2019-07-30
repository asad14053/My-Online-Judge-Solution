#include<bits/stdc++.h>
using namespace std;
int fibo(int n);
int a[100];
int main()
{
    memset(a,0,sizeof(a));
    int n,i;
    scanf("%d",&n);
    a[0]=a[1]=1;
    for(int i=2;i<20;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<a[n-1]<<endl;
    return 0;
}

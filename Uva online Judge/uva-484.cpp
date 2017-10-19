#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f[100000]= {0};
    int a[100000];

    long long n,i=0,c;
    while(scanf("%lld",&n)!=EOF)
    {
        a[i++]=n;
    }
    n=i;
    for(int j=0; j<n; j++)
    {
        c=1;
        for(i=j+1; i<n; i++)
        {
            if(a[j]==a[i])
            {
                c++;
                f[i]=1;
            }
        }
        if(f[j]==0) cout<<a[j]<<" "<<c<<endl;

    }
    return 0;
}

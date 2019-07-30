#include<bits/stdc++.h>
using namespace std;
int f[1000005],i,j;
long long m,n;
int main()
{
    for(i=1; i<=1000000; i++)
        f[i]=1;
    for(i=2; i<=1000; i++)
        if(f[i]==1)
            for(j=i+i; j<=1000000; j+=i)
                f[j]=0;
    cin>>m;
    while(m--)
    {
        cin>>n;
        if(n<=3)
        {
            cout<<"NO"<<endl;
            continue;
        }
        long long t=(long long)sqrt(n*1.0);
        int flag=1;
        for(i=t-1; i<=t+1; i++)
            if(n%i==0&&f[i]==1&&n/i==i)
            {
                cout<<"YES"<<endl;
                flag=0;
                break;
            }
        if(flag==1)
            cout<<"NO"<<endl;
    }
    return 0;
}

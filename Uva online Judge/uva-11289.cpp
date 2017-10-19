#include<bits/stdc++.h>
using namespace std;
#define max 31700
bool p[31700];
 long M(long  b, long p, long m)
{
    if(p==0) return 1;
    else if(p%2==0) return ((M(b,p/2,m))*(M(b,p/2,m)))%m;
    return ((b%m)*M(b,p-1,m))%m;
}
int sieve()
{
    memset(p,1,sizeof(p));
    p[0]=p[1]=0;
    for(int i=2;i<=sqrt(max);i++)
        if(p[i])
        for(int j=i*i;j<max;j+=i)p[j]=0;
    return 0;
}
int main()
{
    int pr,a;
    sieve();
    while(cin>>pr>>a)
    {
        if(!pr&&!a) break;
        if(p[pr]==true) cout<<"no"<<endl;
        else
        {
           if(M(a,pr,pr)==a) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
    }
    return 0;
}

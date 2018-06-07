#include<bits/stdc++.h>
using namespace std;
long M(long  b, long p, long m)
{
    if(p==0) return 1;
    else if(p%2==0) return ((M(b,p/2,m))*(M(b,p/2,m)))%m;
    return ((b%m)*M(b,p-1,m))%m;
}
int main()
{
    long  a,b,c;
    while(scanf("%ld%ld%ld",&a,&b,&c)==3)
    {
        printf("%ld\n",M(a,b,c));
    }
    return 0;
}

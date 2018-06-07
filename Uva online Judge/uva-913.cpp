#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,d,s,p,i;
    while(cin>>n)
    {
        p=0;
        for(i=1; i<=n; i+=2)
            p+=i;
        a=(p*2)-1;
        s=a+(a-2)+(a-4);
        printf("%llu\n",s);
    }
    return 0;
}

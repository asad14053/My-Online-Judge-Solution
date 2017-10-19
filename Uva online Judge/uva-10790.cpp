#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i=1;
    while(cin>>a>>b)
    {
        if(a==0 && b==0) break;
        if(a==0 || b==0)
            printf("Case %lld: 0\n",i++);
        else
            printf("Case %lld: %lld\n",i++,((a*b*(a-1)*(b-1))/4));
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long l,n,m;
    scanf("%ld",&l);
    for(int i=1;i<=l;i++)
    {
        scanf("%ld %ld",&n,&m);
        printf("%ld\n",(n/3)*(m/3));
    }
    return 0;
}

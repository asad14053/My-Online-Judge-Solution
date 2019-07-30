#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,k,s,m,min;

    scanf("%ld",&n);
    while(n--)
    {
        m=0;
        min=100;
        scanf("%ld",&k);
        while(k--)
        {
            scanf("%ld",&s);

            if(s>m) m=s;
            if(s<min) min=s;
        }
        printf("%ld\n",2*(m-min));
    }
    return 0;
}

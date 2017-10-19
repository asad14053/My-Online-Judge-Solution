#include <bits/stdc++.h>
using namespace std;

int fact[20000];

int main()
{
    int i, f, idx;
    fact[0] = fact[1] = 1;
    f = 1;

    for (i=2 ; i<=10000 ; i++)
    {
        f*=i;
        while (f%10 == 0)
            f/=10;

        f = f%100000;
        fact[i] = f%10;
    }

    while (scanf("%d",&idx)==1)
    {
        printf("%5d -> %d\n",idx,fact[idx]);
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define MAX	(int)1e7
typedef long long int64;

int64 GCD(int64 A, int64 B)
{
    return B ? GCD( B, A%B):A;
}

int64 LCM(int64 A, int64 B)
{
    return ( A * B ) / GCD(A, B);
}

int main()
{
    int T;
    scanf("%d", &T);
    while( T-- )
    {
        int64 A, C;
        scanf("%lld%lld", &A, &C);
        if( C % A )
            printf("NO SOLUTION\n");
        else
        {
            int64 B = C / A, i;
            for ( i = B; i<= MAX; i += B )
                if( LCM(A, i) == C )
                    break;
            printf("%lld\n", i);
        }
    }
    return 0;
}

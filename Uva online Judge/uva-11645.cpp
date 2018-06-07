#include <bits/stdc++.h>
using namespace std;
#include <string.h>

long long n, a, b;
const long long DIG = 1e13;
void add(long long num)
{
    b += num;
    a += b / DIG;
    b %= DIG;
}

int main()
{
    int cas = 0;
    while (scanf("%lld", &n) && n >= 0)
    {
        a = b = 0;
        long long tmp = n, d = 1;
        while (n > 1)
        {
            add((n/4) * d);
            if ((n&3) == 3)
                add((tmp&(d - 1)) + 1);
            d *= 2;
            n /= 2;
        }
        printf("Case %d: ", ++cas);
        if (a)
        {
            printf("%lld", a);
            printf("%013lld\n", b);
        }
        else printf("%lld\n", b);
    }
    return 0;
}

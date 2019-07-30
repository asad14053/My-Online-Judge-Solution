#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n, k, h;
int a[100005];
int main()
{
    while (cin>>n>>h>>k)
    {
        for (int i = 1; i <= n; ++ i)
        {
            scanf("%d", &a[i]);
        }
        LL remain = 0;
        LL ans = 0;
        for (int i = 1; i <= n; ++ i)
        {
            ans += remain / k;
            remain %= k;
            if (remain + a[i] <= h)
            {
                remain += a[i];
            }
            else
            {
                ans ++;
                remain = a[i];
            }
        }
        ans += remain / k;
        remain %= k;
        if (remain != 0) ans ++;
        printf("%I64d\n", ans);
    }
}

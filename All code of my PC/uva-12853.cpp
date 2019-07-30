#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, c = 0;
    const double pi = acos(-1);
    double D, N, A;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lf %lf", &D, &N);
        A = D / (N - 1);
        double ret = 2 * pi * (A + D);
        printf("Case %d: %.3lf\n", ++c, ret);
    }
    return 0;
}

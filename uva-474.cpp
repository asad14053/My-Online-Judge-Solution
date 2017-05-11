#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, y, b = log10(2);

    while (scanf("%lf", &n) == 1)
    {
        y = floor(n * b +1);
        printf("2^-%.0lf = %.3lfe-%.0lf\n", n, exp((n-y)*log(2) +y*log(5)), y);
    }

    return 0;
}

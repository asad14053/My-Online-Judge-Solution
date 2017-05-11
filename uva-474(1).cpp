#include <bits/stdc++.h>
using namespace std;
struct Double
{
    Double() {}
    Double(double n, int e) : num(n), exp(e)
    {
        while (num < 1.0)
        {
            num *= 10.0;
            exp++;
        }
    }
    double num;
    int exp;
} ans[1000001];

int main()
{
    ans[1] = Double(5.0, 1);
    for (int i = 2; i <= 1000000; i++)
    {
        ans[i] = Double(0.5 * ans[i - 1].num, ans[i - 1].exp);
    }
    int n;

    while (scanf("%d", &n) == 1)
    {
        printf("2^-%d = %.3lfe-%d\n", n, ans[n].num, ans[n].exp);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    int ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        int x;
        scanf("%d", &x);
        if (x == 1 || x == n)
            ans = max(ans, max(i - 1, n - i));
    }
    printf("%d", ans);
    return 0;
}
/*
5
4 5 1 3 2
7
1 6 5 3 4 7 2
6
6 5 4 3 2 1
*/

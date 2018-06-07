#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, j, r1, r2, r3, r4;
    while (cin >> n >> m,n,m)
    {
        int current, solved[n], solutions[m];
        r1 = r2 =r3 =r4 = 1;
        memset(solved, 0, sizeof(solved));
        memset(solutions, 0, sizeof(solutions));
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> current;
                solved[i] += current;
                solutions[j] += current;
            }
        }
        for (i = 0; i < n; i++)
        {
            if (solved[i] == m) r1 = 0;
            if (solved[i] == 0) r4 = 0;
        }

        for (j = 0; j < m; j++)
        {
            if (solutions[j] == 0) r2 = 0;
            if (solutions[j] == n) r3 = 0;
        }
        cout << r1 + r2 + r3 + r4 <<endl;
    }

    return 0;
}

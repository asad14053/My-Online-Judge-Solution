#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int a[5] = {1, 10, 100, 1000, 10000};
    while (cin>>n>>m)
    {
        int B, x, ret = 0;
        for (int i = 0; i < m; i++)
        {
            int sum = 0, f;
            cin>>B>>f, sum = f;
            for (int j = 1; j < n; j++)
                cin>>x, sum += x;
            if (sum <= B)
            {
                for (int j = 4; j >= 0; j--)
                {
                    if (sum - f + a[j] <= B)
                        ret += a[j] - f, j = -1;
                }
            }
            else
            {
                for (int j = 4; j >= 0; j--)
                {
                    if (sum - f + a[j] <= B)
                        ret += a[j], j = -1;
                }
            }
        }
        cout<<ret<<endl;
    }
    return 0;
}
/*

5 3
300 10 100 10 1 10
1100 100 10 100 1 1000
1200 100 100 10 1 1000
*/

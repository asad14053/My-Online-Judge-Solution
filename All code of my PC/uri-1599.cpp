#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j;
    bool hp, hap;

    while (cin >> n >> m)
    {
        int map[n][m];

        hap = false;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> map[i][j];
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                hp = true;

                if (i - 1 >= 0 && map[i][j] <= map[i - 1][j])
                    hp = false;
                if (j - 1 >= 0 && map[i][j] <= map[i][j - 1])
                    hp = false;
                if (i - 1 >= 0 && j - 1 >= 0 && map[i][j] <= map[i - 1][j - 1])
                    hp = false;

                if (i + 1 < n && map[i][j] <= map[i + 1][j])
                    has_peak = false;
                if (j + 1 < m && map[i][j] <= map[i][j + 1])
                    hp = false;
                if (i + 1 < n && j + 1 < m && map[i][j] <= map[i + 1][j + 1])
                    hp = false;

                if (i + 1 < n && j - 1 >= 0 && map[i][j] <= map[i + 1][j - 1])
                    h_p = false;
                if (i - 1 >= 0 && j + 1 < m && map[i][j] <= map[i - 1][j + 1])
                    hp = false;

                if (hp)
                {
                    hap = true;
                    cout << i + 1 << " " << j + 1 << endl;
                }
            }
        }

        if (!hap) cout << -1 << endl;

        cout << endl;
    }
    return 0;
}

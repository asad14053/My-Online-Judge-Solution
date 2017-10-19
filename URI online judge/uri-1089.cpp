#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h,p;
    vector <int> m;

    while (cin >> n)
    {


        if (n == 0) break;

        m.clear();
        for (int i = 0 ; i < n ; i++)
        {
            cin >> h;
            m.push_back(h);
        }

        p = 0;
        if (m[n - 1] > m[0] and m[1] > m[0])
            p++;
        else if (m[n - 1] < m[0] and m[1] < m[0])
            p++;

        if (m[n - 2] > m[n - 1] and m[0] > m[n - 1])
            p++;
        else if (m[n - 2] < m[n - 1] and m[0] < m[n - 1])
            p++;

        for (int i = 1 ; i < n - 1; i++)
        {
            if (m[i - 1] > m[i] and m[i + 1] > m[i])
                p++;
            else if (m[i - 1] < m[i] and m[i + 1] < m[i])
                p++;
        }

        cout << p << endl;
    }

    return 0;
}

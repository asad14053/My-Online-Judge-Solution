#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, l;
    while (cin >> n >> t >> l)
    {
        vector<int> score(2);
        for (int i = 0; i < n - 1; ++i)
        {
            int cur;
            cin >> cur;
            if (abs(t - cur) <= l)
            {
                score[i & 1] += abs(t - cur);
                t = cur;
            }
        }
        cout << score[0] << ' ' << score[1] << endl;
    }
    return 0;
}

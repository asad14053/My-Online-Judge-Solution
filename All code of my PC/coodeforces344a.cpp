
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
ll a[1500];
ll b[1500];
ll ai[1500];
ll bi[1500];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 0; i < n; ++i)
        cin >> b[i];

    ll maxx = 0;
    for(int x = 0; x < n; ++x)
    {
        for(int y = 0; y < n; ++y)
        {
            ll c1 = 0, c2 = 0;
            for(int k = x; k <= y; ++k)
            {
                c1 |= a[k];
                c2 |= b[k];
            }

            //cout << c1+c2 << endl;
            maxx = max(c1+c2, maxx);

        }
    }
    cout << maxx << endl;
    return 0;
}

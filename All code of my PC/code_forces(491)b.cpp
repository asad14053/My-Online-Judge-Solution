#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define fast()              ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
const ll MOD = 1000000007;
double mm[103];
#define input()             freopen("in0.txt","r",stdin)
#define output()            freopen("out0.txt","w",stdout)
int main()
{
  //    input();
  // output();
    fast();
    double n, x, y, b, sm = 0.0, x1 = 0, x2 = 0, mx = -1, u = 1, mn = 1e9;
    ll t;
    cin >> t;
    double a[t + 3];
    ll in = 0;
    for (int i = 0; i < t; ++i)
        {
            cin >> a[i];
            sm += a[i];
            if (a[i] < 5.00) in++;
        }
    sort(a, a + t);
    mm[0] = a[0];
    for (int i = 1; i < t; ++i)
        mm[i] = mm[i - 1] + a[i];
    double f = (double)t * 1.00 * 4.5;
    if (in == 0 || sm >= f)
        {
            cout << 0 << endl;
            return 0;
        }
    //deb(f, in);
    double fm = sm;
    for (int i = 0; i < t; i++)
        {
            sm = fm;
            sm -= mm[i];
            //deb(sm, mm[i]);
            sm += (double)(i + 1) * 5.00;
            //deb(sm);
            if (sm >= f)
                {
                    cout << i + 1 << endl;
                    return 0;
                }
        }
    cout << t << endl;
}
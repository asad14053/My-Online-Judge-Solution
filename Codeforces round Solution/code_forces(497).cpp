#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define fast()              ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define bug(x) cerr<<#x<<" is "<<x<<endl
#define all(x) (x).begin(), (x).end()
 
 
bool mk[100005];
int main()
{
    ////////////////////////////////////////////
    fast();
    ll t, n, x, y, b, sum = 0, x1 = 0, c = 0, x2 = 0, mx = 0, u = 1, mn = 1e9;
    cin >> t;
    vector<ll> v;
    ll a[t + 2];
    for (ll i = 0; i < t; i++)
        {
            cin >> x;
            v.push_back(x);
            a[i] = x;
        }
    sort(v.begin(), v.end());
    for (ll i = 0; i < t; i++)
        {
            x = upper_bound(v.begin(), v.end(), a[i]) - v.begin();
            //cout << x << " " << a[i] << endl;
            if (x < t)
                {
                    // x++;
                    while (mk[x] && x < t - 1) x++;
                    if (x >= t || mk[x]) continue;
                    mk[x] = 1;
                    c++;
                }
        }
        /////////////////////////////////////
    cout<<c<<endl;
}
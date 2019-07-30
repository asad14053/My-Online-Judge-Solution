#include<bits/stdc++.h>
#define pf printf
#define sc scanf
#define INF (1<<30)-1+(1<<30)
typedef long long ll;
using namespace std;
//#define fast()              ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
template<class T1> void deb(T1 e1)
{
    cout << e1 << endl;
}
template<class T1, class T2> void deb(T1 e1, T2 e2)
{
    cout << e1 << " " << e2 << endl;
}
template<class T1, class T2, class T3> void deb(T1 e1, T2 e2, T3 e3)
{
    cout << e1 << " " << e2 << " " << e3 << endl;
}
#define bug(x) cerr<<#x<<" is "<<x<<endl
#define all(x) (x).begin(), (x).end()
#define unik(v) (v).erase(unique(all(v)), v.end())
const ll MOD = 1000000007;
int main()
{
  //  fast();
    ll t, n, x, y, b, sum = 0, x1 = 0, c = 0;
    cin >> t;
    vector<ll> v;
    cin >> x >> y;
    v.push_back(max(x, y));
    for (int i = 1; i < t; i++)
        {
            cin >> x >> y;
            b = min(x, y);
            c = max(x, y);
            if (b > v[i - 1]) x1++;
            if (c <= v[i - 1]) v.push_back(c);
            else
                v.push_back(b);
        }
    if (x1) cout << "NO"<<endl;
    else
        puts("YES");
}
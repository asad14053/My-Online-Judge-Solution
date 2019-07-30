 

#include<bits/stdc++.h>
#define pf printf
#define sc scanf
#define INF (1<<30)-1+(1<<30)
typedef long long ll;
using namespace std;
#define fast()              ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
template<class T1> void deb(T1 e1)
{
    cout << e1 << endl;
}
 
#define bug(x) cerr<<#x<<" is "<<x<<endl
 
bool isvowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') return true;
    else return false;
}
int main()
{
    fast();
    ll t, n, x, y, b, sum = 0, x1 = 0, c = 0, x2 = 0, mx = 0, u = 1, mn = 1e9;
    string s;
    cin >> s;
    for (int i = 1, l = s.size(); i < l; i++)
        {
            x1++;
            if (!isvowel(s[i - 1]))
                {
                    if (s[i - 1] == 'n') continue;
                    else if (!isvowel(s[i])) return cout << "NO", 0;
                }
        }
    if (!x1 && s[0] != 'n') return cout << "NO", 0;
    if (!isvowel(s[s.size() - 1]) && s[s.size() - 1] != 'n') return cout << "NO", 0;
    deb("YES");
}
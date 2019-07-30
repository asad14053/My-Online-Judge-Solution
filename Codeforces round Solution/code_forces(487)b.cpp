
///    Md.ASADUZZAMAN
///    Dept of ICT
///    MBSTU
#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ull                 unsigned long long

#define fr(i,a,b)           for(int i=(a);i<(b);i++)
#define rfr(i,a,b)          for(int i=(b-1);i>=(a);i--)
#define freach(i, c)        for( __typeof( (c).begin() ) i = (c).begin(); i != (c).end(); ++i )
#define rep(i,n)            for(int i=0;i<(n);i++)
#define rrep(i,n)           for(int i=(n)-1;i>=0;i--)
#define forit(it, s)        for(__typeof(s.begin()) it = s.begin(); it != s.end(); it++)

#define fast()              ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast();
    ll t, n, x, y, b, sum = 0, x1 = 0;
    cin >> t >> n;
    string s = "*", ss;
    cin >> ss;
    s += ss;
    ll sz = s.size() - 1;
    for (int i = 1; i <= sz - n; i++)
    {
        if (s[i] != '.' && s[i + n] != '.')
        {
            x1++;
            if (s[i] == s[i + n]) sum++;
        }
        else
        {
            sum = -1;
            break;
        }
    }
    if (sum == x1 && x1 != 0 || sz == 1 || t == n)
    {
        cout << "No\n";
        return 0;
    }
    for (int i = 1; i <= sz - n; i++)
    {
        if (s[i] == '.' && s[i + n] == '.')
        {
            s[i] = '1';
            s[i + n] = '0';
        }
        else if (s[i] == '.')
            s[i] = (s[i + n] == '0' ? '1' : '0');
        else if (s[i + n] == '.') s[i + n] = (s[i] == '0' ? '1' : '0');
    }
    ll cc = 0;
    for (int i = 1; i <= sz; i++)
        if (s[i] == '.')
        {
            if (cc & 1)
                s[i] = '0';
            else s[i] = '1';
            cc++;
        }
    s.erase(0, 1);
    cout << s << endl;
}

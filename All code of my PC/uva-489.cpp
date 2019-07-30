#include <bits/stdc++.h>
using namespace std;
const string msg[] = {"You win.", "You lose.", "You chickened out."};
string s, g;
int ans = 2, chance = 7, guess;
void Guess(char c)
{
    bool right = false;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == c)
        {
            s[i] = ' ';
            right = true;
            guess--;
        }
    if (!right) chance--;
    if (!chance) ans = 1;
    if (!guess) ans = 0;
}

int main()
{
    int Round;
    while (cin >> Round && Round != -1)
    {
        cin >> s >> g;
        chance = 7,ans = 2;
        guess = s.size();
        for (int i = 0; i <(int)g.size(); i++)
        {
            Guess(g[i]);
            if (ans == 0 || ans == 1) break;
        }
        cout << "Round " << Round << endl;
        cout << msg[ans] << endl;
    }
    return 0;
}

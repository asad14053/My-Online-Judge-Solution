#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, d, nearest_attack, defense_distance, count, temp;
    while (cin >> a >> d,a,d)
    {
        cin >> nearest_attack;

        for (int i = 1; i < a; i++)
        {
            cin >> temp;
            if (temp < nearest_attack) nearest_attack = temp;
        }

        count = 0;

        for (int j = 0; j < d; j++)
        {
            cin >> defense_distance;
            if (defense_distance <= nearest_attack) count++;
        }
        if (count >= 2) cout << "N" << endl;
        else cout << "Y" << endl;
    }
    return 0;
}

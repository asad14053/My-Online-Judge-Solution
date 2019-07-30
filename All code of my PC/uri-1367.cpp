#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, time, total, count, extra[26];
    char letter;
    string status, letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (cin>>n && n)
    {
        total = 0;
        count = 0;
        memset(extra, 0, sizeof(extra));

        while (n--)
        {
            cin >> letter >> time >> status;

            if (status == "correct")
            {
                total += time;
                total += extra[letters.find(letter)];
                count++;
            }
            else
            {
                extra[letters.find(letter)] += 20;
            }
        }

        printf("%d %d\n", count, total);
    }

    return 0;
}

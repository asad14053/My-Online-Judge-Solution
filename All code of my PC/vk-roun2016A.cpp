#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, lens[110000];
    scanf("%d", &n);

    string moves;
    cin >> moves;
    for (int i = 0; i < n; i++)
        scanf("%d", &lens[i]);

    int pos = 0;
    bool finite = false;
    for (int i = 0; i < 2*n; i++)
    {
        if (pos < 0 || pos >= n)
        {
            finite = true;
            break;
        }
        if (moves[pos] == '<') pos -= lens[pos];
        else pos += lens[pos];
    }
    if (finite) printf("FINITE\n");
    else printf("INFINITE\n");

    return 0;
}

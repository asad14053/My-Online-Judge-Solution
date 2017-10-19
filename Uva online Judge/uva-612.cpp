#include <bits/stdc++.h>
#define N 1000000
using namespace std;

struct sequence
{
    string ch;
    int measure;
} a [100 + 3];

int countMeasure (string p)
{
    int c = 0;

    for ( int i = 0; p [i]; i++ )
    {
        for ( int j = i + 1; p [j]; j++ )
            if ( p [i] > p [j] ) c++;
    }

    return c;
}

bool cmp (sequence x, sequence y)
{
    if ( x.measure < y.measure ) return true;
    return false;
}

int main ()
{
    int t;
    scanf ("%d", &t);
    bool b= false;

    while ( t-- )
    {
        int n, m;
        scanf ("%d %d", &n, &m);

        for ( int i = 0; i < m; i++ )
        {
            cin >> a [i].ch;
            a [i].measure = countMeasure (a [i].ch);
        }

        stable_sort (a, a + m, cmp);

        if ( b ) printf ("\n");
        b = true;

        for ( int i = 0; i < m; i++ )
            cout << a [i].ch << endl;
    }

    return 0;
}

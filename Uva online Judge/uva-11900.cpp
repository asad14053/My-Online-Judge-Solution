#include <stdio.h>
#include <algorithm>

using namespace std;

int main ()
{
    int testCase; scanf ("%d", &testCase);
    int cases = 0;
    while ( testCase-- ) {
        int n, p, q; scanf ("%d %d %d", &n, &p, &q);
        int eggWeight [30 + 3];
        for ( int i  = 0; i < n; i++ ) scanf ("%d", &eggWeight [i]);
        sort (eggWeight, eggWeight + n);
        int cnt = 0;
        for ( int i = 0; i < min (p, n); i++ ) {
            q -= eggWeight [i];
            if ( q >= 0 ) cnt++;
        }

        printf ("Case %d: %d\n", ++cases, cnt);
    }

    return 0;
}

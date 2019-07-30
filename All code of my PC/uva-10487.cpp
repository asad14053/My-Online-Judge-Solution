#include<bits/stdc++.h>
using namespace std;

int sum [1000 * 1000 + 10];

int main ()
{
    int n;
    int cases = 0;

    while ( scanf ("%d", &n) && n )
    {
        int num[1000 + 10];

        for ( int i = 0; i < n; i++ ) scanf ("%d", &num[i]);

        int l=0;

        for ( int i = 0; i < n; i++ )
        {
            for ( int j = i + 1; j < n; j++ ) sum [ l ++] = num [i] + num [j];
        }

        int m;
        scanf ("%d", &m);

        printf ("Case %d:\n", ++cases);

        for ( int i = 0; i < m; i++ )
        {
            int q;
            scanf ("%d", &q);
            int md=  214000000;
            int cs;

            for ( int j = 0; j < l; j++ )
            {
                int d = abs (q - sum [j]);
                if ( d < md )
                {
                    md = d;
                    cs= sum [j];
                }
            }

            printf ("Closest sum to %d is %d.\n", q, cs);
        }
    }

    return 0;
}

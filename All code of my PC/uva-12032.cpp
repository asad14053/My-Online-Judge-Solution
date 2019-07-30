 #include<bits/stdc++.h>
using namespace std;
int arr [100000 + 10];
int main ()
{
    int t;
    scanf ("%d", &t);
    int c = 0;

    while ( t-- )
    {
        int n;
        scanf ("%d", &n);

        arr [0] = 0;

        for ( int i = 1; i <= n; i++ ) scanf ("%d", &arr [i]);

        int max = -2147483647;

        for ( int i = 1; i <= n; i++ )
        {
            int d = arr [i] - arr [i - 1];
            if ( d > max ) max = d;
        }

        int res = max;

        for ( int i = 1; i <= n; i++ )
        {
            int d = arr [i] - arr [i - 1];
            if ( d == max ) max--;
            else if ( d > max )
            {
                res++;
                break;
            }
        }

        printf ("Case %d: %d\n", ++c, res);
    }

    return 0;
}

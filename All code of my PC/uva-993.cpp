#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    scanf ("%d", &t);

    while ( t--)
    {
        int n;
        scanf ("%d", &n);

        string output = "";
        bool invalid = false;

        while ( n >= 10 && !invalid )
        {
            int prev = n;
            for ( int i = 9; i >= 2; i-- )
            {
                if ( n % i == 0 )
                {
                    output += (i + '0');
                    n /= i;
                    break;
                }
            }
            if ( prev == n ) invalid = true;
        }

        reverse (output.begin(), output.end());

        if ( invalid ) cout << "-1" << endl;
        else cout << n << output << endl;
    }

    return 0;
}

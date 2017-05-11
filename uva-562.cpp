#include<bits/stdc++.h>
#define N 1000000
using namespace std;
int main ()
{
    int testCase;
    cin>>testCase;
    while (testCase-- )
    {
        int n;
        cin>>n;

        int coin [100 + 5];
        int totalSum = 0;

        for ( int i = 0; i < n; i++ )
        {
            scanf ("%d", &coin [i]);
            totalSum += coin [i];
        }

        int dp [50000 + 10];
        memset (dp, 0, sizeof (int) * 50010);

        dp [0] = 1;

        for ( int i = 0; i < n; i++ )
        {
            for ( int j = totalSum; j >= 0; j-- )
            {
                if ( dp [j] )
                    dp [j + coin [i]] = 1;
            }
        }

        int diff;

        if ( totalSum % 2 == 0 )
        {
            for ( int i = totalSum / 2; i >= 0; i-- )
            {
                if ( dp [i] )
                {
                    diff = i;
                    break;
                }
            }

            printf ("%d\n", ((totalSum / 2) - diff) * 2);
        }
        else
        {
            for ( int i = totalSum / 2; i >= 0; i-- )
            {
                if ( dp [i] )
                {
                    diff = i;
                    break;
                }
            }

            printf ("%d\n", ((totalSum / 2) - diff) * 2 + 1);
        }
    }

    return 0;
}

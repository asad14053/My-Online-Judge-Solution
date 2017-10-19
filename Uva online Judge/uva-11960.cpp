/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int md,n,d,mn,k;
    cin>>n;
    while(n--)
    {
       // cout<<"==============="<<endl;
        md=-100;
        cin>>k;
        for(int i=1; i<=k; i++)
        {
            d=0;
            for(int j=1; j<=sqrt(i); j++)
            {
                if(i%j==0)
                d+=2;
            }
            if((int)sqrt(i)==sqrt(i)) d--;
            if(d>=md)
            {
                md=d;
                mn=i;
            }
        }
        cout<<mn<<endl;

    }
    return 0;
}
*/


#include <bits/stdc++.h>
#define N 1000005
using namespace std;

bool mark [N];
int primeList [100000];
int divisors [N];
int maxDivisor [N];

void sieve ()
{
    memset(mark,1,sizeof(mark));
    mark [0] = mark [1] = false;

    for ( int i = 4; i < N; i += 2 ) mark [i] = false;

    for ( int i = 3; i <= sqrt (N); i += 2 )
    {
        if ( mark [i] )
        {
            for ( int j = i * i; j < N; j += 2 * i ) mark [j] = false;
        }
    }

    int ind = 0;
    primeList [ind++] = 2;

    for ( int i = 3; i < N; i += 2 )
        if ( mark [i] ) primeList [ind++] = i;
}

int findDivisors (int n)
{
    int len = sqrt (n);
    int ind = 0;
    int power;
    int ret = 1;

    while ( primeList [ind]  <= len )
    {
        power = 0;
        while ( n % primeList [ind] == 0 )
        {
            power++;
            n /= primeList [ind];
        }
        ret *= power + 1;
        ind++;
    }

    if ( n > 1 ) ret *= 2;

    return ret;
}

int main ()
{
    sieve ();

    for ( int i = 1; i < N; i++ ) divisors [i] = findDivisors (i);

    maxDivisor [1] = 1;

    for ( int i = 2; i < N; i++ )
        maxDivisor [i] = divisors [i] >= divisors [maxDivisor [i - 1]] ? i : maxDivisor [i - 1];

    int testCase;
    scanf ("%d", &testCase);

    while ( testCase-- )
    {
        int n;
        scanf ("%d", &n);
        printf ("%d\n", maxDivisor [n]);
    }

    return 0;
}



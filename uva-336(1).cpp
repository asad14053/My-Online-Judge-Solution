#include <bits/stdc++.h>
#define N 1000000
using namespace std;

bool mat[30 + 3] [30 + 3];

void reset ()
{
    for ( int i = 0; i < 33; i++ )
        memset (mat [i], false, sizeof (mat [i]));
}

int main ()
{
    int edges;
    int c = 0;

    while ( cin >> edges && edges )
    {
        reset ();

        map <int, int> in;
        int n= 1;

        for ( int i = 0; i < edges; i++ )
        {
            int a, b;
            cin >> a >> b;
            if ( !in[a] ) in [a] = n++;
            if ( !in[b] ) in[b] = n++;

            mat [in[a]] [in [b]] = mat [in [b]] [in [a]] = true;
        }

        int que;
        int tt;
        int dis [30 + 3];

        while ( cin >> que >> tt )
        {
            if ( que == 0 && tt == 0 ) break;

            memset (dis, -1, sizeof (dis));

            dis [in [que]] = 0;

            queue <int> q;
            q.push (in [que]);

            while ( !q.empty () )
            {
                int u = q.front ();
                q.pop ();

                for ( int i = 1; i < n; i++ )
                {
                    if ( mat[u] [i] && dis [i] == -1 )
                    {
                        dis [i] = dis [u] + 1;
                        q.push (i);
                    }
                }
            }

            int cnt = 0;

            for ( int i = 1; i < n; i++ )
            {
                if ( dis [i] == -1 || dis [i] > tt ) cnt++;
            }

            printf ("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",
                    ++c, cnt, que, tt);
        }
    }

    return 0;
}


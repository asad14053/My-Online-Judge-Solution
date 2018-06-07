#include<bits/stdc++.h>
using namespace std;
int adj_mat[21][21];
int main()
{
    int  i, j, x, y,k ;
    int a,b, kase = 0;
    int N = 19, Q ;
    // bool first = true ;
    while ( cin >> x )
    {
        for ( i = 0; i <= 19 ; i++)
            for ( j = 0 ; j <= 19 ; j++)
                adj_mat[i][j] = 1000000;

        k = 0 ;
        for ( i = 0 ; i < x ; i++)
        {
            cin >> y ;
            adj_mat[k][y-1] = 1;
            adj_mat[y-1][k] = 1;
        }
        k++;
        for ( i = 1 ; i < 19 ; i++ )
        {
            cin >> x ;
            for ( j = 0 ; j < x ; j++ )
            {
                cin >>  y ;
                adj_mat[k][y-1] = 1 ;
                adj_mat[y-1][k] = 1 ;
            }
            k++ ;
        }
        // FLOYD WARSHALL'S ALGORITHM

        for ( k = 0 ; k <= 19 ; k++)
            for ( i = 0 ; i <= N ; i++)
                for ( j = 0 ; j <= N ; j++ )
                    adj_mat [i][j] = min ( adj_mat [i][j], adj_mat [i][k] + adj_mat [k][j] );

        cin >> Q ;
        cout <<"Test Set #"<<++kase<<endl;
        for ( i =  0 ; i < Q ; i++)
        {
            cin >> a >> b;
            //cout <<a<<" to "<<b <<": "<<adj_mat[a-1][b-1] <<endl;;
            printf("%2d to %2d: %ld\n",a,b,adj_mat[a-1][b-1]);

        }
        cout << endl;


    }
    return 0 ;
}

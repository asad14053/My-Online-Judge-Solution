#include<bits/stdc++.h>
using namespace std;

int main()
{
    int adj_mat[21][21];
    int  i , j , x , y ,k ;
    int a ,b , kase = 0;
    int N  , Q ;
    cin>>N;
    for ( k = 0 ; k < N; k++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj_mat[a][b]=c;
       adj_mat[b][a]=INFINITY;
    }
    // FLOYD WARSHALL'S ALGORITHM

    for ( k = 1 ; k <= N; k++)
        for ( i = 1 ; i <= N ; i++)
            for ( j = 1 ; j <= N ; j++ )
                adj_mat [i][j] = min ( adj_mat [i][j] , adj_mat [i][k] + adj_mat [k][j] );
    for ( i = 1 ; i <= N ; i++)
        for ( j = 1 ; j <= N ; j++ )
            cout<<  adj_mat [i][j] <<endl;
    while ( cin >> a >> b)
    {
        cout<<a<<"to"<<b<<" "<<adj_mat[a][b]<<endl;

    }
    cout << endl;
    return 0 ;
}

/*

5
1 2 5
2 3 1
3 1 8
3 4 3
4 1 2
1 2
2 3
3 1
3 4
4 1
1 4
3 2
*/

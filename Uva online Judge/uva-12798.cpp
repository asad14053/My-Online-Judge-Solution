#include<bits/stdc++.h>
using namespace std;
int G[107];
int main()
{
    // FI ;
    int N, M ;
    while( cin>>N>>M )
    {
        memset(G,0,sizeof(G));
        for( int j=0 ; j<N; j++ )
        {
            for( int i=0 ; i<M; i++ )
            {
                int x ;
                cin>>x;
                if( x ) ++G[j];
            }
        }
        int Ans = 0 ;
        for( int i=0 ; i<N; i++ ) Ans += ( G[i] == M );
        cout<<Ans<<endl;
    }
}

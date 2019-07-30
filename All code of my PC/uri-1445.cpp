#include<bits/stdc++.h>
using namespace std;

int main () {
    int N, a, b;
    int i;
    while (1) {
        scanf("%d", &N);
        if(N == 0) break;
        scanf ( "\n" );
        int mat[1111][1111];
        memset ( mat, 0, sizeof(mat) );
        int ba=0;

        while(N--){
            scanf("(%d,%d)%*c", &a, &b);
            mat[a][b] = 1;
            mat[b][a] = 1;
            if ( a > ba ) ba=a;
            if ( b > ba ) ba=b;
        }

        int visitado[1111];
        memset ( visitado, 0, sizeof(visitado) );
        int total = 1;
        visitado[1] = 1;
        int pilha[1111];
        int pilhaindex = 0;

        for ( i=2; i<=ba; i++ ) {
            if ( mat[1][i] == 1 ) {
                pilhaindex++;
                pilha[pilhaindex] = i;
            }
        }

        while ( pilhaindex != 0 ) {
            int v = pilha[pilhaindex];
            pilhaindex--;

            if ( visitado[v] == 0 ) {
                for ( i=0; i<=ba; i++ ) {
                    if ( mat[v][i] == 1 ) {
                        pilhaindex++;
                        pilha[pilhaindex] = i;
                    }
                }
                total++;
            }
            visitado[v] = 1;
        }
        printf ( "%d\n", total );
    }
    return 0;
}

#include<stdio.h>
#define INF 9999999
int main()
{
    int mat[10][10], i , j , x , y ,k,a,b,N,q ;
     scanf("%d",&N);
    for(int i=1; i<=N; i++)
        for(j=1; j<=N; j++)
            scanf("%d",&mat[i][j]);

    for ( k = 1 ; k <= N; k++)
        for ( i = 1 ; i <= N ; i++)
            for ( j = 1 ; j <= N ; j++ )
                if(mat [i][k] + mat [k][j]<mat[i][j])
                    mat [i][j]=mat [i][k] + mat [k][j];
    printf("  ");
    for(int i=1; i<=N; i++)
    printf(" %d ",i);
    printf("\n______________\n");
     for(int i=1; i<=N; i++)
     { printf("%d |",i);
        for(j=1; j<=N; j++)
        printf("%d ",mat[i][j]);
        printf("\n");
     }

    return 0 ;
}



/*

3
0 4 11
6 0 2
3 999 0

*/

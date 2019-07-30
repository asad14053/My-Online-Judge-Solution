#include <stdio.h>

int flag;

void call (int x, int i)
{
    if ( x != 0 ) {

        if ( flag == 0 ) { // first print
            flag = 1;
            if ( x == -1 && i != 0 )
                printf("-");
            else if ( x != 1 || i == 0)
                printf("%d", x);


            // i == 1 (first block)
            if ( i == 1 )
                printf("x");
            else if ( i > 0 )
                printf("x^%d", i);

        }

        else { // others
            if ( x < 0 ) {
                printf (" - ");
                if ( x != -1 || i == 0) {
                    x *= -1;
                    printf ("%d", x);
                }

                // (i == 1) block
                if ( i == 1 )
                    printf("x");
                else if ( i > 0 )
                    printf("x^%d", i);
            }

            else {
                printf(" + ");
                if ( x != 1 || i == 0 )
                    printf("%d", x);

                // (i == 1) block
                if ( i == 1 )
                    printf("x");
                else if ( i > 0 )
                    printf("x^%d", i);
            }
        }

    }
}





int main ()
{
    int x [10];

    while ( scanf ("%d", &x [0]) != EOF ) {

        int i;
        for ( i = 1; i < 9; i++ )
            scanf ("%d", &x [i]);
        flag = 0;

        for ( i = 0; i < 9; i++ )
                call ( x [i], 8 - i );

        if ( flag == 0 )
            printf("0");

        printf("\n");
    }
    return 0;
}

/* critical input
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 1
0 0 0 0 0 0 0 1 0
0 0 0 0 0 0 1 0 0
1 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 -1
0 0 0 0 0 0 0 -1 0
0 0 0 0 0 0 -1 0 0
-1 0 0 0 0 0 0 0 0

*/

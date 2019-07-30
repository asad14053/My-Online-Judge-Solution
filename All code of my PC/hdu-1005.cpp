# include <stdio.h>
int main ()
{
    int T, a, b, c ;

    int nCase = 1 ;
    scanf ("%d", &T) ;

    while (T--)

    {

        scanf ("%d%d%d", &a, &b, &c) ;

        if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)

            printf ("Case %d: yes\n", nCase++) ;

        else

            printf ("Case %d: no\n", nCase++) ;
    }
    return 0 ;

}


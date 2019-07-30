#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    int a [1010+2];
    while (cin>>n&&n)
    {

        bool space = false;
        for ( int i=0; i<n;i++ )
        cin>>a[i];
        for ( int i=0;i<n;i++)
        {
            if (a[i])
            {
                if (space)
                    printf (" ");
                space = true;
                printf ("%d", a[i]);
            }
        }
        if ( !space )
            printf ("0");
        printf ("\n");
    }
    return 0;
}

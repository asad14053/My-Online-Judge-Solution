#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int i ,a=131071, n=0 ;
    char ch ;
    while ( (ch=getchar() )!=EOF )
    {
         if (ch=='#')
        {
             if (n==0) printf ("YES\n")  ;
             else printf ("NO\n") ;
             n=0 ;
        }

       else if (ch!='\n') n=(n*2+ (ch-'0') ) % a;

    }

    return 0 ;
}

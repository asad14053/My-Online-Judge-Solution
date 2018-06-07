#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    int p;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d,",&p);
        if( p == 2 || p == 3 || p == 5 || p == 7 || p == 13 || p == 17 || p == 19 )
            printf("Yes\n") ;
        else printf("No\n");
    }
}

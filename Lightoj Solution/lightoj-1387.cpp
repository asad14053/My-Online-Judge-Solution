#include <stdio.h>
#include <string.h>

int main ()
{
    int t,s=0,d=0,l,i=1;
    char a [100];
    scanf ("%d", &t);
    while ( t--)
    { scanf("%d",&l);
    getchar();
    s=0;
    printf("Case %d:\n",i++);
        while(l--)
     {
        scanf ("%s", a);
        if (strcmp (a, "donate")==0)
        {
            scanf ("%d", &d);
            s += d;
        }
        else if(strcmp(a,"report")==0)
        printf ("%d\n",s);
    }
    }

    return 0;

}


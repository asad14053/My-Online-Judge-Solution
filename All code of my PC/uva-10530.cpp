#include <stdio.h>
#include <string.h>
int main()
{
    int n,a[12]= {0},i;
    char str[20];
    while(scanf("%d",&n) && n)
    {
        getchar();
        gets(str);

        if(strcmp(str,"too low")==0)
        {
            for(i=n; i>=1; i--)
                a[i]=-1;
        }
        else if(strcmp(str,"too high")==0)
        {
            for(i=n; i<=10; i++)
                a[i]=-1;
        }
        else
        {
            if(a[n]==0)
                printf("Stan may be honest\n");
            else
                printf("Stan is dishonest\n");
            for(i=0; i<=10; i++)
                a[i]=0;
        }

    }
    return 0;
}

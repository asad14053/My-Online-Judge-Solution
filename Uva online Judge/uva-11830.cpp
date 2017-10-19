#include<stdio.h>
#include<string.h>

int main()
{
    char st[1000];
    char anstemp[1000];
    int i,j;
    while(gets(st))
    {
        if(strcmp(st,"0 0")==0)
            break;
        char ch = st[0];
        int i, j = 0;
        for (i = 2; i < strlen(st); i++)
        {
            if (st[i] != ch)
                anstemp[j++] = st[i];
        }
        for (i = 0; i < j; i++)
        {
            if (anstemp[i] != '0')
                break;
        }
        if (i == j)
            puts("0");
        else
        {
            for (; i < j; i++)
                putchar(anstemp[i]);
            puts("");
        }
    }
    return 0;
}

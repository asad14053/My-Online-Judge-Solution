#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct post
{
    int len;
    int pos;
    char *p;
};

int compare(const void * a, const void * b)
{
    struct post *pa = (struct post *)a;
    struct post *pb = (struct post *)b;

    if(pb->len == pa->len) return pa->pos - pb->pos;
    return pb->len - pa->len;
}

int main()
{
    int n, i, cont, j, k;
    char linha[2600];
    char *pch;

    scanf("%d%*c", &n);

    for(i = 0; i < n; i++)
    {
        gets(linha);
        cont = 0;
        struct post arr[51];
        pch = strtok (linha," ");
        while (pch != NULL)
        {
            arr[cont].p = pch;
            arr[cont].len = strlen(pch);
            arr[cont].pos = cont;
            cont++;
            pch = strtok (NULL, " ");
        }
        qsort(arr, cont, sizeof(post), compare);
        for(j = 0; j < cont; j++)
        {
            if(j == cont-1) printf("%s\n", arr[j].p);
            else printf("%s ", arr[j].p);
        }
    }

    return 0;
}

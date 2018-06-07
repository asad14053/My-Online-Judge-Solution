#include<stdio.h>
#include<string.h>
int main()
{
    char n[1000];
    int i,c;
    while(gets(n))
    {
        c=strlen(n);
        for(i=0; i<c; i++)
            printf("%c",n[i]-7);
        printf("\n");
    }
    return 0;
}

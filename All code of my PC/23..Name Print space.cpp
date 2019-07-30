#include<stdio.h>
#include<string.h>

int main()
{
char name[50];
int b,i;
    gets(name);
    b=strlen(name);
    for(i=0;i<b;i++)
    printf("%c ",name[i]);
printf("\n");

return 0;
}

#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("enter N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("#",j);
        printf("\n");
    }
    getch();
}

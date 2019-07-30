#include<stdio.h>
int main()
{
    int t,j,i,a[10],max;
    char b[10][100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)

    {
        max=0;
        for(j=0;j<10;j++)
        {

        scanf("%s %d",&b[j],&a[j]);
        if(a[j]>max)
            max=a[j];

        }
        printf("Case #%d:\n",i);
        for(j=0;j<10;j++)
            if(a[j]==max)printf("%s\n",b[j]);

    }
    return 0;
}

#include<stdio.h>
main()
{
    long int a,b,i;
    scanf("%ld",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%ld",&b);

        if(b==1)
            printf("Yes\n");
        else
        {
            if(b==3)
                printf("Yes\n");
           else if(b%3==0&&b%9==0)
                printf("Yes\n");
            else if(b%3==1&&b%4==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}

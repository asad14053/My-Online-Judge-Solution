#include<stdio.h>
int main()
{
    long int a[20000],n,i,x,y,c;
    printf("Lumberjacks:\n");
    while(scanf("%ld",&n)==1)
    while(n--)
    {
        for(i=0;i<10;i++)
        {
            scanf("%ld",&a[i]);

        }
        x=a[0];
        y=a[1];
        if(x<y)
         {
            c=0;
            for(i=0;i<9;i++)
            if(a[i]<a[i+1])
                    c++;
         }
        else if(x>y)
        {
             c=0;
                for(i=0;i<9;i++)
                if(a[i]>a[i+1])
                c++;
        }
        if(c==9)
             printf("Ordered\n");
             else
            printf("Unordered\n");
    }

    return 0;
}


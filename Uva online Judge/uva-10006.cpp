#include <stdio.h>

int main()
{
    int x,flag,i;
    int arr[15]= {561, 1105, 1729, 2465, 2821,
                  6601, 8911, 10585, 15841, 29341,
                  41041, 46657, 52633, 62745, 63973
                 };
    while(scanf("%d",&x)==1)
    {
        flag=0;

        if(x==0)
            break;
        for(i=0; i<15; i++)
        {
            if(x==arr[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("The number %d is a Carmichael number.\n",x);
        else
            printf("%d is normal.\n",x);
    }
    return 0;
}

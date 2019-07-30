#include<stdio.h>
int main()
{
    int n,j,i,count,sum;
    scanf("%d",&j);
    while(j--)
    {
        sum=0;
        count=0;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            sum=sum+i;
            if(sum<=n&&sum==n)
                count++;
        }
        if(count==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

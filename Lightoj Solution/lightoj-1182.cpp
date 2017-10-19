#include<stdio.h>
int main()
{
    int a,n,c[10000],i,sum,m,z;
    while((scanf("%d",&m))==1)
    {
        for(z=1;z<=m;z++)
        {
            scanf("%d",&n);
            sum=0;
            for(i=0;n>0;i++)
            {
                 c[i]=n%2;
                 n=n/2;
                 sum=sum+c[i];
            }
            if(sum%2==0)
                printf("Case %d: even\n",z);
            else
                printf("Case %d: odd\n",z);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,i,g,n;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d/%d/%d",&a,&b,&c);
            scanf("%d/%d/%d",&d,&e,&f);
            g=(c-f);
            if(b<e)
                g--;
            else if(b==e)
            {
                if(a<d)
                    g--;
            }
            if(g<0) /* note this if- condition */
                printf("Case #%d: Invalid birth date\n",i);
            else if(g>130)
                printf("Case #%d: Check birth date\n",i);
            else
                printf("Case #%d: %d\n",i,g);
        }
    }
    return 0;
}

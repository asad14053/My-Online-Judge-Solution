#include<stdio.h>
#include<cstring>
int main()
{
    long n,m,a[10000],i,s,c,f,j;
    double d;
    while(scanf("%ld",&n)==1)
        while(n--)
        {
            c=s=f=0;
            scanf("%ld",&m);
            for(i=0; i<m; i++)
                scanf("%ld",&a[i]);
            for(i=0; i<m; i++)
            {
                s=s+a[i];
            }
            f=s/m;

            for(j=0; j<m; j++)
            {
                if(a[j]>f)
                    c++;
            }
            d=(double)c/(double)m;
            printf("%.3lf%%\n",d*100);
        }
    return 0;

}

#include<stdio.h>
#include<string.h>
int main()
{
    char x[1000],y[1000],aa[1000];
    int l,lx,ly,i,j,k,h,s,p,q,n,m,u;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%s%s",x,y);
            lx=strlen(x);
            ly=strlen(y);
            l=lx;
            if(ly>l)
                l=ly;
            h=0;
            m=0;
            for(j=0; j<l; j++)
            {
                if(lx>j)
                    p=x[j]-'0';
                else
                    p=0;
                if(ly>j)
                    q=y[j]-'0';
                else
                    q=0;
                s=p+q+h;
                aa[m]=s%10+'0';
                h=s/10;
                m++;
            }
            if(h>0)
            {
                aa[m]=h+'0';
                m++;
            }
            for(k=0; k<m; k++)
            {
                if(aa[0]==48)
                    for(u=1; u<m; u++)
                    {
                        if(aa[u]>48)
                            printf("%c",aa[u]);
                        k++;
                    }
                else
                    printf("%c",aa[k]);
            }
            printf("\n");
        }
    }
    return 0;
}

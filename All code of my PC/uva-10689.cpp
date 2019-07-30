#include<bits/stdc++.h>
int main()
{
    long long a,b,n,m,k,c,i,r,x[100],q,j,l;
    while(scanf("%lld",&k)==1)
        while(k--)
        {
            a=b=c=m=n=r=q=0;
            x[100]={0};
            scanf("%lld%lld%lld%lld",&a,&b,&n,&m);

                for(i=1; i<=n; i++)
                {

                    c=a+b;
                    a=b;
                    b=c;

                }
                r=a;
                j=0;
                while(r!=0)
                {
                     x[j]=r%10;
                     q++;
                     if(q<=m)
                     {
                      printf("%lld\n",a);
                      break;
                     }
                     else if(q>m)
                     {
                         for(l=q-1;l>q-m;l--)
                             printf("%lld",x[l]);
                         printf("\n");
                     }
                    j++;
                }

            }
             return 0;

        }

#include<stdio.h>
int main()
{
    long long a,n,m,p,i;
    scanf("%lld",&n);
    for( i=1;i<=n;i++)
    {
        p=0;
        scanf("%lld",&a);
       m=a;
       while(m!=0)
       {
           p=p*10+m%10;
           m/=10;
       }
       if(a==p) printf("Case %d: Yes\n",i);
       else  printf("Case %d: No\n",i);
    }
   return 0;
}

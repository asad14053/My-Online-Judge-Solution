#include<bits/stdc++.h>
#include<math.h>
int main()
{
    double m,k;
    long int i=0,n,d,v,u;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld%ld%ld",&d,&v,&u);
        if(u==0 ||v==0 ||u<=v)
            printf("Case %ld: can't determine\n",++i);
        else
        {
            m=k=0;
            m=d*1.0/(sqrt(u*u-v*v));
            k=d*1.0/u;
            printf("Case %ld: %.3f\n",++i,m-k);
        }
    }
    return 0;
}

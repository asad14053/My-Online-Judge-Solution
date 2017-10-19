#include<bits/stdc++.h>
int main()
{
    long a,b,i,m,c;
    double n;
    while(scanf("%ld%ld",&a,&b)==2)
    {
        if(a==0&&b==0)
            break;
        c=0;
        for(i=a;i<=b;i++)
        {
            n=sqrt(i);
            m=n;
            if(n==m)
                c++;
        }
        printf("%ld\n",c);
    }
    return 0;
}

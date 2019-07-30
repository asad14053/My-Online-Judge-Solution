#include<bits/stdc++.h>
int prime(long int j);
int main()
{
    long long a,b,i,n,j;
    scanf("%lld",&n);
    while(n--)
    {

        scanf("%lld%lld",&a,&b);

        for(j=a; j<=b; j++)
        {
            if( prime(j)==0)

                printf("%lld\n",j);
        }
    }
    return 0;
}



int prime(long int j)
{
    long c,f,i;
    c=0;
    f=0;
    if(j==1)
        return 1;
    if(j==2)
        return 0;
    if(j%2==0)
        return 1;
    else
    {
        for(i=3; i*i<=(j); i+=2)
            if(j%i==0)
                return 1;
        return 0;

    }
}
#include<bits/stdc++.h>
int prime(long int j);
int main()
{
    long long a,b,i,n,j;
    scanf("%lld",&n);
    while(n--)
    {

        scanf("%lld%lld",&a,&b);

        for(j=a; j<=b; j++)
        {
            if( prime(j)==0)

                printf("%lld\n",j);
        }
    }
    return 0;
}



int prime(long int j)
{
    long c,f,i;
    c=0;
    f=0;
    if(j==1)
        return 1;
    if(j==2)
        return 0;
    if(j%2==0)
        return 1;
    else
    {
        for(i=3; i*i<=(j); i+=2)
            if(j%i==0)
                return 1;
        return 0;

    }
}

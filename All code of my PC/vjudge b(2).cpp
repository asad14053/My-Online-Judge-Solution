#include<bits/stdc++.h>
int prime(long int j);
int sum(long int j);
int main()
{
    long long a,b,i,n,j,m,o;
    scanf("%ld",&n);
    while(n--)
    {

        scanf("%ld%ld",&a,&b);

        for(j=a; j<=b; j++)
        { o=0;
            if( prime(j)==0)

                    m=sum(j);
                    if(prime(m)==0)
                        o++;
                    printf("%ld\n",o);

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
int sum(long int j)
{
    long s;
    s=0;
    while(j!=0)
    {
        s+=j%10;
        j/=10;
    }
    return s;
}

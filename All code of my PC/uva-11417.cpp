#include<bits/stdc++.h>
int GCD(long a,long b)
{
    long k;
    while(a!=0)
    {
        k=b%a;
        b=a;
        a=k;
    }
    return b;
}

int main()
{
    long i,j,N,G;
    while(scanf("%ld",&N)==1)
    {
        G=0;
        if(N==0) break;
        for(i=1; i<N; i++)
        {

            for(j=i+1; j<=N; j++)
            {
                G+=GCD(i,j);
            }
        }
        printf("%ld\n",G);
    }
    return 0;
}

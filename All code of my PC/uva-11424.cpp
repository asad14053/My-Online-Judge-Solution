#include<bits/stdc++.h>
int gcd(unsigned long long a,unsigned long long b);
int main()
{
    unsigned long long G;
    long a,b,N,i,j;
    while(scanf("%llu",&N)==1)
    {
          if(N==0) break;
            G=0;
            for(i=1;i<N;i++)
            for(j=i+1;j<=N;j++)
            {
                G+=gcd(i,j);
            }
        printf("%llu\n",G);
    }
    return 0;
}
int gcd(unsigned long long a,unsigned long long b)
{
    while(b>0)
    {
        a=a%b;
        a^=b;
        b^=a;
        a^=b;
    }
    return a;
}

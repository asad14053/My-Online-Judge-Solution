#include<bits/stdc++.h>
using namespace std;
#define max 10000

int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}


int main()
{
    int a,b,x[max],i,num,j,m,d[max];
    int n=0;

    while(scanf("%d",&x[n])==1&&x[n])
    {
        n++;
        m=0;

        while(scanf("%d",&x[n])==1&&x[n])
        {
            d[m]=x[n]-x[n-1];
            if (d[n-1]<0)
                d[n-1]=-d[n-1];
            if (d[m])
                m++;
            n++;
        }
        num=d[0];
        for(j=1; j<m; j++)
            num=gcd(num,d[j]);
        printf("%d\n",num);
        i=0;

    }
}

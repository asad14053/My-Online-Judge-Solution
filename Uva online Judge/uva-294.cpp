#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long l,u,i,j,md=0,mn=0,d,n;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld %lld",&l,&u);
        if(l>u)
            swap(l,u);
        md=0;
        for(i=l; i<=u; i++)
        {
            d=0;
            for(j=1; j<=sqrt(i); j++)
                if(i%j==0)
                    d+=2;
            //  cout<<sqrt(i)<<"\n";
            if((int)sqrt(i)==sqrt(i)) d--;
            if(d>md)
            {
                md=d;
                mn=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lu divisors.\n",l,u,mn,md);
    }
    return 0;
}



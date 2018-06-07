#include <cstdio>
#include <cmath>

using namespace std;

inline long abs(long x)
{
    if(x<0) return -x;
    return x;
}

long int gcd(int a,int b)
{
    return b==0 ? a:gcd(b,a%b);
}

long arr[60];

int main()
{
    int n,i,j,ct,tot;
    while(scanf("%d",&n))
    {

        if( n == 0 ) break;
        for(i=0; i<n; i++)
            scanf("%ld",&arr[i]);
        ct = 0;
        for(i=0; i<n-1; i++)
            for(j=i+1 ; j<n ; j++)
                if( gcd( arr[i],arr[j] )==1) ct++;
        tot = n*(n-1)/2;
        if( ct==0)
            printf("No estimate for this data set.\n");
        else
            printf("%.6lf\n", sqrt((double)6*(double)tot/(double)ct) );

    }
    return 0;
}

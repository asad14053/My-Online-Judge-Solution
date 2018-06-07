#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long n,p,q,c,i,t,a[20000],d=0;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld%ld%ld",&n,&p,&q);
        for(i=0; i<n; i++)
            scanf("%ld",&a[i]);
        sort(a,a+n);
        c=0;
        for(i=0; i<min(p,n); i++)
        {
            q-=a[i];
            if(q>=0) c++;
        }
        printf("Case %ld: %ld\n",++d,c);
    }
    return 0;
}

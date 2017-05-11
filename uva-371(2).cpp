#include<stdio.h>
#include<map>
using namespace std;
int main()
{
    long long a,b,i,j,p,q,x,c;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(a==0&&b==0)
            break;
        if(a>b)
            swap(a,b);
            x=0;
        for(i=b;i>=a;i--)
        {
            p=i;
            c=1;
            if(p%2==0)
                p=p/2;
            else
                p=3*p+1;
            while(p!=1)
            {
               if(p%2==0)
                {p=p/2;
                c++;
                }
            else
            {
                p=3*p+1;
                c++;
            }
            }
            if(c>=x)
            {
                x=c;
                q=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,q,x);
    }
    return 0;
}

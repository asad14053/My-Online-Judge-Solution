#include<stdio.h>
#include<map>
using namespace std;
int main()
    {
        long long a,b,c,Max,Gn,p,t,i;
        while(scanf("%lld%lld",&a,&b)==2)
        {
            Max=0;
            if(a==0||b==0)
            break;
            if(a>b)
            swap(a,b);
            for(i=b;i>=a;i--)
            {
                p=i;
                c=1;
                if(p%2==0)
                {
                    p/=2;
                }
                else
                {
                    p=3*p+1;
                }
                while(p!=1)
                {
                    if(p%2==0)
                    {
                        p/=2;
                        c++;
                    }
                    else
                    {
                        p=3*p+1;
                        c++;
                    }

                }
                if(c>=Max)
                {
                    Max=c;
                    Gn=i;
                }
            }
          printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,Gn,Max);
        }
        return 0;
    }

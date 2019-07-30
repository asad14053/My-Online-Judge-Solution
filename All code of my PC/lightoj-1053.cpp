#include<stdio.h>
#include<math.h>
int main()
{
    long int max=0,T,a,b,c,l=0,test;
    scanf("%ld",&T);
    while(T--)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        if(a>b && a>c)
        {
            test=sqrt(pow(b,2)+pow(c,2));
            if(test==a) printf("Case %d: yes\n",++l);
            else printf("Case %d: no\n",++l);
        }
        else if(b>a && b>c)
        {
            test=sqrt(pow(a,2)+pow(c,2));
            if(test==b) printf("Case %d: yes\n",++l);
            else printf("Case %d: no\n",++l);
        }
        else
        {
            test=sqrt(pow(a,2)+pow(b,2));
            if(test==c) printf("Case %d: yes\n",++l);
            else printf("Case %d: no\n",++l);
        }
    }
    return 0;
}

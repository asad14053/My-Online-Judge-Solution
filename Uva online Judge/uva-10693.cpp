#include<stdio.h>
#include<math.h>
int main()
{
    long int l ,f;
    double v,volume,s;
    while(scanf("%ld %ld",&l,&f)==2)
    {
            if(l==0 && f==0)
                break;
         v= sqrt(2*l*f);

         volume = (v*3600)/(2*l);
         printf("%.8lf %.8lf\n",v,volume);
    }
    return 0;
}

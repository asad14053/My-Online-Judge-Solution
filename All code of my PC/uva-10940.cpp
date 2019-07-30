#include<stdio.h>
#include<math.h>

int main()
{
    int i,x,s,n;
    double y;
    while(scanf("%d",&n)==1 && n)
    {
        x=1;
        while(x<=n)
        {
            x*=2;
        }
        s=x%n;

        printf("%d\n",n-s);

    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,i=0,d;
     scanf("%d",&n);
    while(n--)
    {
         scanf("%d%d",&a,&b);
        d=(4*a)+(4*fabs(a-b))+19;
        printf("Case %d: %d\n",++i,d);

    }
    return 0;
}

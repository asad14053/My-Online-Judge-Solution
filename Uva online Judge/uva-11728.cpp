#include <stdio.h>
#include <math.h>
int main()
{
    int n1,n2, s, i , j, k, t=1, f=0;

    while(scanf("%d", &n1)==1)
    {
        if(n1==0)
            break;
        for(n2=n1, f=0; n2>=1 ;n2--)
        {
            for(i=1, s=0; i<=n2/2; i++)
            {
                if(n2%i==0)
                {
                    s+=i;
                }
            }
            s+=n2;

            if(s==n1)
            {
                printf("Case %d: %d\n",t, n2);
                f=1;
                break;
            }
        }
        if(f==0)
              printf("Case %d: -1\n", t);

        t++;
    }
}

#include<stdio.h>
int main()
{
    unsigned long int n;
    int i,c,b[1000],d,k,s;
    scanf("%lu",&k);
    while(k--)
    {
        scanf("%lu",&n);
        d=0;
        //if(n==0)
       // break;
        i=0;s=0;
        while(n!=0)
        {
            b[i]=n%2;
            n/=2;
            s=s+b[i];
            i++;
        }


        if(s%2==0)
        printf("Case %d: even\n",++d);
        else printf("Case %d: odd\n",++d);

    }
    return 0;
}


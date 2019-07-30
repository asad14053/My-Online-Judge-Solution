#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    long a,b,e,f,g,r[100000];
    int i,j,k;
    while(scanf("%ld%ld",&a,&b)==2)
    {
        memset(r,0,sizeof(r));
        for(j=1; j<=b; j++)
            scanf("%ld",&r[j]);
        sort(r,r+b+1);
        if(a==b)
            printf("*");
        else
        {
            j=1;
            while(j<=b)
                for(i=1; i<=a; i++)
                {
                    if(i!=r[j])
                        printf("%ld ",i);
                    else
                        j++;

                }

        }
        printf("\n");
    }
    return 0;
}

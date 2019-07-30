#include<stdio.h>
#include<algorithm>
#define MAX 5001
using namespace std;
main()
{
    int a[MAX],i,j,k,temp;
    while(scanf("%d",&k)==1)
    {
        for(i=0; i<k; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+k);
        for(i=k-1; i>=0; i--)
            printf("%d",a[i]);
        printf("\n");
        int o=0;
        for(i=0; i<k; i++)
        {
            if(a[i]==0)
            {
                o = o+1;
            }
        }

        temp=a[0];
        a[0]=a[o];
        a[o]=temp;
        for(i=0; i<k; i++)
            printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}


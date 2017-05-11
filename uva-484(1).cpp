#include<stdio.h>
int main()
{

    int n,a,i=0,j,ar[100000],count=1;
    int flag[100000]= {0};
    while(scanf("%d",&n)!=EOF)
        ar[i++]=n;
    n=i;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ar[i]==ar[j])
            {
                count++;
                flag[j]=1;
            }
        }
        if(flag[i]==0)
            printf("%d %d\n",ar[i],count);
        count=1;
    }
    return 0;
}


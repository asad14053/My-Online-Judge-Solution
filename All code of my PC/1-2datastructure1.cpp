#include<stdio.h>
int main()
{
    long a[100],n,x=0,s=0,m,c=0,i,j;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        s+=a[i];

    }
    x=s/n;
    if(x<50)
    {
        m=a[0];
        for(j=1;j<n;j++)
        {
           if(a[j]>m)
           {
               m=a[j];
               c=1+j;
           }
        }
        printf("max=%ld , pos=%ld",m,c);
    }
    return 0;
}

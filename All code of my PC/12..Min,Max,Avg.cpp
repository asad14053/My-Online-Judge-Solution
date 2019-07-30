#include<stdio.h>
int main()
{
int i,j,n,a[100],max,min,loc1,loc2,sum;
    float avg;
printf("Enter the range:");
scanf("%d",&n);
printf("Enter the data:");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);

    loc1=0;
    max=a[1];
    for(i=2;i<=n;i++)
    if(max<a[i])
    {
    max=a[i];
    loc1=i;
    }
        if(max==a[1])
        loc1=1;

    loc2=0;
    min=a[1];
    for(i=2;i<=n;i++)
    if(min>a[i])
    {
    min=a[i];
    loc2=i;
    }
        if(min==a[1])
        loc2=1;

        sum=0;
for(i=1;i<=n;i++)
sum=sum+a[i];
avg=(float)sum/n;

printf("Min=%d,Pos=%d\n",min,loc2);
printf("Max=%d,Pos=%d\n",max,loc1);
    printf("Average=%.2f\n",avg);
return 0;
}

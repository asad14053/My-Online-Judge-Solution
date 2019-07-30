#include<stdio.h>
int main()
{
int i,j,n,a[100],max;

printf("Enter the range:");
scanf("%d",&n);
printf("Enter the data:");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);

    max=a[1];
    for(i=2;i<=n;i++)
    if(max<a[i])
    max=a[i];
printf("Maximum is=%d\n",max);
return 0;
}

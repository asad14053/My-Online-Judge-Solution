#include<stdio.h>
 main()
{
int i,j,n,fact,Sum=0;
printf("Enter your limit");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=1;
for(j=1;j<=i;j++)
fact=fact*j;
Sum=Sum+fact;
printf("%d ",fact);
}
printf("\nSum=%d",Sum);
return 0;
}

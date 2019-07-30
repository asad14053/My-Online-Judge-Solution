#include<stdio.h>
int main()
{
int i,j,n,a[100],loc,item;
printf("Enter the range:");
scanf("%d",&n);
printf("Enter the data:");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);

printf("Enter the item:");
scanf("%d",&item);
    loc=0;
    for(i=1;i<=n;i++)
    if(a[i]==item)
    loc=i;

//printf("%d",loc);
    for(i=loc;i<=n-1;i++)
    a[i]=a[i+1];
    a[n]='\0';
for(i=1;i<=n-1;i++)
printf("%d ",a[i]);

return 0;
}

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

printf("position=%d",loc);
return 0;
}

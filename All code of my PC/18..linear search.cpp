#include<stdio.h>
int main()
{
int a[100],n,i,item;
printf("Enter the size of the array:\n");
scanf("%d",&n);
printf("Enter the value:\n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
printf("Item=");
scanf("%d",&item);
int c=0;
for(i=1;i<=n;i++)
if(a[i]==item)
c=i;
if(c!=0)
printf("location=%d\n",c);
else
printf("The item is not found\n");
return 0;
}

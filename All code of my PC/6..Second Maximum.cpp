//The code for second maximum number
#include<stdio.h>
int main()
{
int a[100],i,j,n,temp;
printf("How many data:");
scanf("%d",&n);
printf("Enter the values:");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
for(j=1;j<=n-i;j++)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
printf("The second maximum number is:%d ",a[n-1]);
return 0;
}

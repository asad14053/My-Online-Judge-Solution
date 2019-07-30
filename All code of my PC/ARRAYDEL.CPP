#include<stdio.h>
#include<conio.h>
#define NULL 0
void main()
{
int a[20],i,loc=0,n,m,item;
clrscr();
printf("Enter the maximum range: ");
scanf("%d",& n);
printf("\nEnter the loc of item: ");
scanf("%d",& m);
for(i=1;i<n;i++)
{
printf("\nEnter array element :");
scanf("%d",& a[i]);
}
for(i=loc+1;i<=n;i++)
{
a[i-1]=a[i];
}
n=n-1;
for(i=1;i<n;i++)
printf("%d ",a[i]);
getch();
}

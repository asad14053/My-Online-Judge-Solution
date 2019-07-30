#include<stdio.h>
#include<conio.h>
void main()
{
  int a[23],loc,n,i;
  clrscr();
  printf("\nrange:");
  scanf("%d",&n);
  printf("\nloc:");
  scanf("%d",&loc);
  for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
  for(i=loc+1;i<=n;i++){
	a[i-1]=a[i];}
	n=n-1;
   for(i=1;i<=n;i++)
	printf("%d",a[i]);
  getch();
  }
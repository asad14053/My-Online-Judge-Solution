#include<stdio.h>
#include<conio.h>
void main()
{
   int i,m,a[100],small,j,temp;
   clrscr();
   printf("Enter maximum range of a list:");
   scanf("%d",&m);
   printf("Enter the list element:");
   for(i=1;i<=m;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=1;i<=m-1;i++)
   {
      small=i;
      for(j=i+1;j<=m;j++)
      {
	  if(a[j]<a[small])
	      small=j;
      }
      temp=a[i];
      a[i]=a[small];
      a[small]=temp;
   }
   printf("The Soted List is:");
   for(i=1;i<=m;i++)
   {
      printf("%d ",a[i]);
   }
   getch();
   }
#include<stdio.h>
#include<conio.h>
int main()
{
   int i,m,a[100],x,j;
   printf("Enter maximum range of a list:");
   scanf("%d",&m);
   printf("Enter the list element:");
   for(i=1;i<=m;i++)
   {
      scanf("%d",&a[i]);
   }
   for(j=2;j<=m;j++)
   {
      x=a[j];
      i=j-1;
      while(a[i]>x)
      {
	  a[i+1]=a[i];
	  i=i-1;
      }
      a[i+1]=x;
   }
   printf("The Sorted List is:");
   for(i=1;i<=m;i++)
   {
      printf("%d ",a[i]);
   }

   }



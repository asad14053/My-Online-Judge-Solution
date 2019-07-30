#include<stdio.h>
#include<conio.h>
void main()
{
   int i,m,f,l,a[100],mid,x;
   clrscr();
   printf("Input maximum range of a List:");
   scanf("%d",&m);
   printf("Input a list by assending order with numeric data:");
   for(i=1;i<=m;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("Enter Search Item:");
   scanf("%d",&x);
   f=1;
   l=m;
   while(f<=l)
   {
      mid=(f+l)/2;
      if(a[mid]==x)
      {
	  printf("FOUND & POSITION IS: %d",mid);
	  break;
      }
      else if(x<a[mid])
      {
	  l=mid-1;
      }
      else
      {
	  f=mid+1;
      }
   }
   if(f>l)
   {
      printf("NOT FOUND");
   }
   getch();
   }

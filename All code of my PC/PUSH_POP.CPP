#include<stdio.h>
#include<conio.h>

int main()
{
  clrscr();
  int a[50],i,j,n,k,top=0,max=5,item;
  while(1)
  {
     printf("\nDo u want to push (999 for exit) : ");
	 scanf("%d",&item);
     if(item==999)
	break;

     if(top==max)
     {
       printf("\n\narary is overflow.....");
	break;
     }
     else
     {
	a[top]=item;
	top++;
     }

  }
  printf("\n");
  for(i=top-1;i>=0;i--)
  {
    printf("\n%d ",a[i]);
  }

  printf("\n");
   while(1)
   {
      printf("\nDo u want to pop (0 or 1): ");
      scanf("%d",&n);
      if(top==0)
      {
      printf("\n\narray is underflow.....");
      break;
      }
      if(n)
	top--;
      else
	 break;
   }
  printf("\n");
  for(i=top-1;i>=0;i--)
  {
    printf("\n%d  ",a[i]);
  }

  getch();
  return 0;

}













#include<stdio.h>
#include<conio.h>
void main()
{
  int stak[10],i,j,ele,pus,top=0;
  clrscr();
  printf("\nNumber of element:");
  scanf("%d",&ele);
  printf("\ninput stak element:");
  for(i=1;i<=ele;i++)
    {
       scanf("%d",&stak[i]);
       top++;
    }
  printf("\nNumber of Push element:");
  scanf("%d",&pus);
  stak[ele+1]=pus;
  top=top+1;
  printf("\nThe total output:");
  if(top>10)
     printf("\tstak is Overflow");
  else
     {
       for(i=top;i>=1;i--)
	 printf("%d ",stak[i]);
     }
getch();
}






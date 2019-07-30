#include<conio.h>
#include<stdio.h>
void main()
 {
  clrscr();
  int x[10],i,j,top=0,ele,push;
  printf("\nNUMBER OF ELEMENT=");
  scanf("%d",&ele);
  printf("\nnumber of stack element=");
    for(i=1;i<=ele;i++)
      {
       scanf("%d",&x[i]);
       top++;
      }
  printf("\nNUMBER OF PUSH ELEMENT=");
  scanf("%d",&push);
  x[ele+1]=push;
  top=top+1;
  printf("\nSTACK OUTPUT= ");
    if(top>10)
      {
       printf("overflow");
      }
    else
     {
      for(i=top;i>=1;i--)
      printf("%d ",x[i]);
     }
  getch();
}
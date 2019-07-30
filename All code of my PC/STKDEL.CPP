#include<conio.h>
#include<stdio.h>
void main()
 {
  clrscr();
  int x[10],i,item,top=0,ele;
  printf("\nNUMBER OF ELEMENT=");
  scanf("%d",&ele);
  printf("\nINPUT STACK ELEMENT=");
  for(i=1;i<=ele;i++)
    {
     scanf("%d",&x[i]);
     top++;
    }
 printf("\nOUTPUT THE STACK ELEMENT=");
  for(i=top;i>=1;i--)
    {
     printf("%d ",x[i]);
    }
 printf("\npress 1 for delete=");
 scanf("%d",&item);
  while(1)
   {
   if(item==1)
   {
    item=1;
    top=top-1;
    }
    if(item==0)
    {
     if(top==0)
       {
	 printf("\nUNDERFLOW");
       }
    break;
    }
  printf("\nagree to del press 1 or 0=");
  scanf("%d",&item);
/* if(item<ele)
 {
  printf("not found");
  break;
 }*/
 }
 printf("\n\nTOTAL OUTPUT=");
  for(i=top;i>=1;i--)
 printf("%d ",x[i]);
 getch();
}
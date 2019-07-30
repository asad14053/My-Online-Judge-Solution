#include<stdio.h>
#include<conio.h>
#define NULL 0
void main()
{
 int stack[10],size,i,item,top=0,k=1, m;
 clrscr();
 printf("\nNumber of stack element:");
 scanf("%d",&size);
 printf("\nInput stack element:");

 for(i=1;i<=size;i++)
 {
    scanf("%d",&stack[i]);
    top++;
 }
 printf("\nOutput the stack element:");
 for(i=1;i<=size;i++)
 {
    printf("%d ",stack[i]);
 }
 printf("\nDelet item:");
 scanf("%d",&item);
 printf("\nTotal output after delting item:");
 for(i=top;i>=1;i--,k++)
 {

    if(stack[i]==item)
      stack[i]=NULL;
   else
    {
      stack[i]=NULL;
      break;
    }
 }
 top=top-k;
 for(i=1;i<=top;i++)
     printf("%d ",stack[i]);

 getch();
 }

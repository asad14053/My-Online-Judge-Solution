#include<stdio.h>
#include<conio.h>
#define NULL 0
void main()
{
 int stack[10],size,i,item,top=0, m;
 clrscr();
 printf("\nNumber of stack element:");
 scanf("%d",&size);
 printf("\nInput stack element:");

 for(i=1;i<=size;i++)
 {
    scanf("%d",&stack[i]);
    top++;
 }
 printf("Insert item: ");
 scanf("%d",& item);
 for(i=top;i>=1;i--)
 {
 stack[top+1]=item;}
 top=top+1;
 if(item==size)
 {
 printf("overflow");
 }
 else
 {
 printf("\nOutput the stack element:");
 for(i=top;i>=1;i--)
 {
    printf("%d ",stack[i]);
 }
 }
 getch();
 }
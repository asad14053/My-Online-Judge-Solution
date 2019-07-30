#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct node
   {

     int data;
     node* next;

   };

void main()
{
     int item,top,i;
     struct node *stack,*nptr,*tptr;
     clrscr();
     stack=NULL;
     printf("\ninput a number 0 or 1:");
     scanf("%d",&i);

   while(i==1)
   {

       nptr=new(node);
       scanf("%d",&nptr->data);
       nptr->next=NULL;

       if(stack==NULL)
      {
	  stack=nptr;

      }
      else
      {
	  nptr->next=stack;
	  stack=nptr;
      }
      printf("do u continue....");
      scanf("%d",&i);
   }
   printf("\nDelete item:");
   scanf("%d",&item);

   while(stack->data!=item)
   {

       stack=stack->next;

    }

   stack=stack->next;

    while(stack->data!=NULL)
    {
      printf("%d ",stack->data);
      stack=stack->next;
    }
getch();
}

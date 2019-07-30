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
     int item,top;
     struct node *stack,*nptr;
     clrscr();
     stack=NULL;
     printf("\ninput a number 0 or 1:");
     scanf("%d",&item);

   while(item==1)
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
      scanf("%d",&item);
   }
   printf("\nInsert item:");
   nptr=new(node);
   scanf("%d",&nptr->data);
   nptr->next=stack;
   stack=nptr;
   while(stack->next!=NULL)
   {
       printf("%d   ",stack->data);
       stack=stack->next;
    }
    printf("%d",stack->data);

getch();
}

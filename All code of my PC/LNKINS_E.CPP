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
     struct node *stack,*nptr,*tptr,*pptr;
     clrscr();
     stack=NULL;
     printf("\ninput a number 0 or 1:");
     scanf("%d",&item);

   while(item==1)
   {

       nptr=(struct node*)malloc(sizeof(struct node));
       nptr=new(node);
       scanf("%d",&nptr->data);
       top++;
       nptr->next=NULL;

       if(stack==NULL)
      {
	  stack=nptr;
	  tptr=nptr;
      }
      else
      {
	  tptr->next=nptr;
	  tptr=nptr;
      }
      printf("do u continue....");
      scanf("%d",&item);
   }
   printf("\nNew node:");
   nptr=new(node);
   scanf("%d",&nptr->data);
   nptr->next=NULL;

   tptr=stack;
   while(tptr->next==NULL)
   {
	 tptr->next=nptr;
	 tptr=nptr;

    }
   //stack=tptr;
   jump:
   if(stack->next!=NULL)
   {
       printf("%d   ",stack->data);
       stack=stack->next;
       goto jump;
    }
   else
       printf("%d",stack->data);

getch();
}
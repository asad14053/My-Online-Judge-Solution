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
     struct node *stack,*nptr,*tptr;
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
      printf("do u continue press 1 or 0=");
      scanf("%d",&item);
   }
   tptr=stack;
   printf("\nDelete item:");
   scanf("%d",&item);
 while(tptr->data==item)
   {
      tptr->data=NULL;
      tptr=tptr->next;
   }
   stack=tptr;
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
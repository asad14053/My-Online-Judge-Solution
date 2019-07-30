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
     int top;
     struct node *stack,*nptr,*tptr;
     clrscr();
     stack=NULL;
   while(1)
   {

       nptr=new(node);
       printf("Enter stack Element:");
       scanf("%d",&nptr->data);
       nptr->next=NULL;
       if(nptr->data==0)
       {
	  break;
       }
       else if(stack==NULL)
       {
	  stack=nptr;

      }
      else
      {
	  nptr->next=stack;
	  stack=nptr;
      }
   }
   tptr=stack;
   printf("\nR U agree for Delete press 1 or not press 2:");
   scanf("%d",&top);
   while(1)
   {
      if(top==1&&tptr!=NULL)
      {
	 tptr=tptr->next;
      }
      else if(top==2)
      {
	 break;
      }
      else if(tptr==NULL)
      {
	 printf("Stack is underflow");
	 break;
      }
      printf("\nDelete item:");
      scanf("%d",&top);
      }
      stack=tptr;
      printf("\nStack Element is:");
      while(stack->data!=NULL)
      {
	printf("%d ",stack->data);
	stack=stack->next;
      }
getch();
}

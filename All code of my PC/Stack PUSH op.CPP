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
     int n;
     struct node *stack,*nptr;
     clrscr();
     stack=NULL;

   while(1)
   {

       nptr=new(node);
       printf("Enter a Stack element:");
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
   printf("R U agree For PUSH operation press 1:");
   scanf("%d",&n);
   while(1)
   {
   if(n==1)
   {
     nptr=new(node);
     scanf("%d",&nptr->data);
     nptr->next=stack;
     stack=nptr;
   }
   if(n!=1)
   {
     break;
   }
   printf("R U agree For PUSH operation press 1:");
   scanf("%d",&n);
   }
   printf("Stack Elemenrt:");
   while(stack->next!=NULL)
   {
       printf("%d ",stack->data);
       stack=stack->next;
    }
    printf("%d",stack->data);

getch();
}

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
     //int item;
     struct node *front,*rear,*nptr;
     clrscr();
     front=NULL;
     rear=NULL;
   while(1)
   {
       printf("Press 0 for exit:");
       nptr=new(node);
       scanf("%d",&nptr->data);
       nptr->next=NULL;
       if(nptr->data==0)
       {
	   break;
       }

       if(front==NULL)
       {
	  front=nptr;
	  rear=nptr;
       }
       else
       {
	  rear->next=nptr;
	  rear=nptr;
       }
   }
/******************************FOR INSERTION*********************************/
       printf("Insertion item:");
       nptr=new(node);
       scanf("%d",&nptr->data);
       nptr->next=NULL;
       rear->next=nptr;
       rear=nptr;

   while(front!=NULL)
   {
       printf("%d  ",front->data);
       front=front->next;
   }

   //printf("%d",front->data);

getch();
}


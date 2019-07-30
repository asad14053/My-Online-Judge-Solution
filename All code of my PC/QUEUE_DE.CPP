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
    // printf("\ninput a number 0 or 1:");
     //scanf("%d",&item);

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
     // printf("do u continue....");
     // scanf("%d",&item);
   }
       //FOR Insertion
       printf("Insertion item:");
       nptr=new(node);
       scanf("%d",&nptr->data);
       nptr->next=NULL;
       rear->next=nptr;
       rear=nptr;

   while(front->next!=NULL)
   {
       printf("%d  ",front->data);
       front=front->next;

    }

       printf("%d",front->data);

getch();
}


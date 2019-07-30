#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct node
   {
     node* back;
     int data;
     node* next;

   };

void main()
{
     int item;
     struct node *list,*nptr,*tptr,*pptr;
     clrscr();
     list=NULL;
   while(1)
   {

       //nptr=(struct node*)malloc(sizeof(struct node));
       nptr=new(node);
       printf("Press 0 for Exit:");
       scanf("%d",&nptr->data);
       nptr->next=NULL;
       if(nptr->data==0)
       {
	   break;
       }
       else if(list==NULL)
       {
	  list=nptr;
	  nptr->back=list;
	  tptr=nptr;
       }
       else
       {
	  tptr->next=nptr;
	  nptr->back=tptr;
	  tptr=nptr;
       }
   }
   printf("\nEnter delete item:");
   scanf("%d",&item);
   tptr=list;
   while(1)
   {
    while(tptr->next!=NULL)
    {
      if(tptr->data!=item)
      {
	    pptr=tptr;
	    tptr=tptr->next;
      }
      pptr->next=tptr->next;
    }
    else
    {
      list=list->next;
    }
   }
   jump:
   if(list->next!=NULL)
   {
       printf("%d ",list->data);
       list=list->next;
       goto jump;
   }
   else
       printf("%d",list->data);

getch();
}
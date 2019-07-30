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
     struct node *list,*nptr,*tptr,*pptr,*mptr,*rptr;
     clrscr();
     list=NULL;
   while(1)
   {

       //nptr=(struct node*)malloc(sizeof(struct node));
       nptr=new(node);
       printf("Press 0 for Exit:");
       scanf("%d",&nptr->data);
       nptr->back=NULL;
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
   printf("Enter node which  u insert adata: ");
   scanf("%d",&item);
   printf("\nInsertion Data:");
   nptr=new node;
   scanf("%d",&nptr->data);
   nptr->back=NULL;
   nptr->next=NULL;
   pptr=list;
   mptr=NULL;
   rptr=NULL;
   while(1)
   {
       if(pptr->data!=item)
       {
       while(1)
       {
	  if(pptr->data!=item)
	  {
		if(rptr==NULL)
		{
		   rptr=pptr;
		   pptr->back=rptr;
		   mptr=pptr;
		   pptr=pptr->next;
		}
		else
		{
		   mptr->next=pptr;
		   pptr->back=mptr;
		   mptr=pptr;
		   pptr=pptr->next;
		}
	  }
	  else if(pptr->data==item && pptr->next!=NULL)
	  {
	       mptr->next=pptr;
	       mptr=pptr;
	       nptr->next=pptr->next;
	       mptr->next=nptr;
	       nptr->back=mptr;
	       break;
	  }
	  else if(pptr->data==item && pptr->next==NULL)
	  {
	       printf("\nNot Inserted:\n");
	       break;
	  }
       }
	  list=rptr;
	  break;
       }
       else if(pptr->data==item)
       {
	      nptr->next=pptr->next;
	      pptr->next=nptr;
	      nptr->back=pptr;
       }
       list=pptr;
       pptr->back=list;
       break;
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
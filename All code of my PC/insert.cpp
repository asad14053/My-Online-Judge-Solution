#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct node
{
    int data;
    node *next;
};
void main()
{
    int item;
    clrscr();
    struct node *list,*nptr,*tptr,*pptr,*mptr,*rptr=NULL;
    list=NULL;
while(1)
 {

	nptr=new(node);
	printf("press 0 for exit:");
	scanf ("%d",&nptr->data);
	nptr->next=NULL;
	if(nptr->data==0)
	{
	  break;
	}

	else if(list==NULL)
	{
	    list=nptr;
	    tptr=nptr;
	}

	else
	{
	    tptr->next=nptr;
	    tptr=nptr;
	}
 }
printf("\nEnter a node which after u insert data:");
scanf("%d",&item);
printf("Insertion data:");
      nptr=new(node);
      scanf("%d",&nptr->data);
      nptr->next=NULL;
      pptr=list;
      mptr=NULL;
      mptr->next=NULL;
      while(1)
      {
	  if(pptr->data!=item&&pptr->next!=NULL)
	  {
	  while(1)
	  {

		 if(pptr->data!=item)
		 {
		   if(mptr==NULL)
		   {
		     rptr=pptr;
		     mptr=pptr;
		     pptr=pptr->next;
		   }
		   else
		   {

		     mptr->next=pptr;
		     mptr=pptr;
		     pptr=pptr->next;
		   }
		 }
		 else if(pptr->data==item && pptr->next!=NULL)
		 {

		     mptr->next=pptr;
		     nptr->next=pptr->next;
		     pptr->next=nptr;
		     break;
		 }
		 else if(pptr->data==item && pptr->next==NULL)
		 {
		     printf("Not Insert\n");
		     break;
		 }
	   }
	      list=rptr;
	      break;
	  }
	  if(pptr->data==item)
	  {
	      nptr->next=pptr->next;
	      pptr->next=nptr;
	      list=pptr;
	      break;
	  }

       }
      while(list->next!=0)
      {
	   printf("%d ",list->data);
	   list=list->next;

       }
       printf("%d  ",list->data);
  getch();
  }

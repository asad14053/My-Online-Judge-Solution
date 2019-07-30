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
    struct node *list,*nptr,*tptr,*temp,*pptr,*mptr,*rptr=NULL;
    list=NULL;
    while(1)
    {
	//nptr=(struct node*)malloc(sizeof(struct node));
	nptr=new(node);
	printf("Press 0 for Exit:");
	scanf ("%d",&nptr->data);
	nptr->next=NULL;
	if(nptr->data==0)
	{
	    tptr->next=temp;
	    break;
	}
	else if(list==NULL)
	{
	    list=nptr;
	    tptr=nptr;
	    temp=nptr;
	}

	else
	{
	    tptr->next=nptr;
	    tptr=nptr;
	}
    }
    printf("Enter a node which after U Insert a node:");
    scanf("%d",&item);
    printf("Insert Node:");
    nptr=new node;
    scanf("%d",&nptr->data);
    nptr->next=NULL;
    pptr=list;
    mptr=NULL;
    mptr->next=NULL;
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
	   else if(pptr->data==item)
	   {
	     mptr->next=pptr;
	     mptr=pptr;
	     //pptr->next=temp;
	     nptr->next=pptr->next;
	     mptr->next=nptr;
	     break;
	  }
	}
	list=rptr;
	break;
      }
      else if(pptr->data==item)
      {
	 mptr=pptr;
	 nptr->next=pptr->next;
	 mptr->next=nptr;
	 list=mptr;
	 break;
      }
    }
    while(list->next)
    {
	printf("%d ",list->data);
	list=list->next;
	if(list==temp)
	{
	    printf("%d ",list->data);
	    break;
	}
    }

  getch();
  }

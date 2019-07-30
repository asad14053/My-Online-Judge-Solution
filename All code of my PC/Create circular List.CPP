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
    struct node *list,*nptr,*tptr,*temp;
    list=NULL;
    while(1)
    {
	nptr=(struct node*)malloc(sizeof(struct node));
	nptr=new(node);
	printf("Press o for Exit:");
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







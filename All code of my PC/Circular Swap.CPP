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
    int s1,s2;
    clrscr();
    struct node *list,*nptr,*tptr,*temp,*pptr;
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
    printf("Enter a node for swap first:");
    scanf("%d",&s1);
    printf("Enter a node for swap first:");
    scanf("%d",&s2);
    tptr=list;
    while(1)
    {
      while(tptr->data!=s1)
      {
	 pptr=tptr;
	 tptr=tptr->next;
      }
      tptr->data=s2;
      tptr=tptr->next;
      while(tptr->data!=s2)
      {
	 pptr=tptr;
	 tptr=tptr->next;
      }
      tptr->data=s1;
      pptr=tptr;
      pptr->next=tptr->next;
      break;
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

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
    struct node *list,*nptr,*tptr;
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

	else if(list==NULL){
	    list=nptr;
	    tptr=nptr;
	   }

	else{
	    tptr->next=nptr;
	    tptr=nptr;
	    }
      }

printf("Insertion data:");
      nptr=new(node);
      scanf("%d",&nptr->data);
      nptr->next=NULL;
      tptr->next=nptr;
      while(list->next!=0)
      {
	   printf("%d ",list->data);
	   list=list->next;

       }
       printf("%d  ",list->data);
  getch();
  }

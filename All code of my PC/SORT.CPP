#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define NULL 0
struct node
{
  int data;
  node *next;

} ;
int main()
{
  clrscr();
  struct node *nptr,*tptr,*list;
  int temp;
    list=NULL;
  while(1)
  {
     nptr=(struct node*)malloc(sizeof(struct node));
     nptr=new(node);
     printf("999 for exit: ");
     scanf("%d",&nptr->data);
     nptr->next=NULL;


     if(list==NULL)
       {
	  list=nptr;
	  tptr=nptr;
       }
     else
     {
	tptr->next=nptr;
	tptr=nptr;

     }
     if(nptr->data==999)
      break;


  }
   tptr=list;
   jump:
   if(tptr->next!=0)
     {
	printf("%d ",tptr->data);

	tptr=tptr->next;
	goto jump;
     }
    for(tptr=list;tptr->next!=0;tptr=tptr->next)
    for(nptr=tptr->next;nptr->next!=0;nptr=nptr->next)
    {
	if(tptr->data<nptr->data)
	{
	  temp=tptr->data;
	  tptr->data=nptr->data;
	  nptr->data=temp;

	}

    }

     tptr=list;
     jum:
   if(tptr->next!=0)
     {
	printf("\n\n%d   ",tptr->data);

	tptr=tptr->next;
	goto jum;
     }
     return 0;
}
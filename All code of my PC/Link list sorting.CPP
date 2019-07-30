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
     int item,temp;
     struct node *list,*nptr,*tptr,*pptr;
     clrscr();
     list=NULL;
   while(1)
   {

       //nptr=(struct node*)malloc(sizeof(struct node));
       nptr=new(node);
       printf("press 0 for exit:");
       scanf("%d",&nptr->data);
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
    printf("\nInsertion data:");
    nptr=new node;
    scanf("%d",&nptr->data);
    tptr=list;
    nptr->next=tptr;
    //tptr=nptr;
    list=nptr;
    for(tptr=list;tptr->next!=0;tptr=tptr->next)
    {
       for(nptr=tptr->next;nptr->next!=0;nptr=nptr->next)
       {
	  if(tptr->data> nptr->data)
	  {
	    temp=tptr->data;
	    tptr->data=nptr->data;
	    nptr->data=temp;
	   }
       }
    }
   printf("\nOutput for the Link list:");
   while(list->next!=NULL)
   {
       printf("%d ",list->data);
       list=list->next;
    }

     printf("%d",list->data);

getch();
}



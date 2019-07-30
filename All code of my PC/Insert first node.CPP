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
     int item,flag=0;
     struct node *list,*nptr,*tptr,*pptr;
     clrscr();
     list=NULL;
   while(1)
   {

       nptr=(struct node*)malloc(sizeof(struct node));
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
   printf("\nInsertion Data:");
   nptr=new node;
   scanf("%d",&nptr->data);
   nptr->back=NULL;
   nptr->next=NULL;
   tptr=list;
   list=nptr;
   nptr->next=tptr;
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
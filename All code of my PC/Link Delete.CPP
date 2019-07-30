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
     int item,flag=0;
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
	  tptr=nptr;
       }
       else
       {
	  tptr->next=nptr;
	  tptr=nptr;
      }
   }
   printf("\nDelete Item:");
   scanf("%d",&item);
   tptr=list;
   if(tptr->data!=item)
   {
      while(tptr->data!=item)
      {
	  pptr=tptr;
	  tptr=tptr->next;
      }
      pptr->next=tptr->next;

   }
   else
   {
      list=tptr->next;
   }
   while(list->next!=NULL)
   {
      printf("%d ",list->data);
      list=list->next;
   }
   printf("%d",list->data);


getch();
}

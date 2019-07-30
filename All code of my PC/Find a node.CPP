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
   printf("\nSearch Data");
   scanf("%d",&item);
   pptr=list;
   while(1)
   {
     if(pptr->next!=NULL)
     {
      if(pptr->data==item)
      {
	 flag=1;
	 break;
      }
      else
      {
	 flag=0;
      }
    }
    if(pptr->next==NULL)
     {
      if(pptr->data==item)
      {
	 flag=1;
	 break;
      }
      else
      {
	 break;
      }
     }
    pptr=pptr->next;
   }
   if(flag==1)
   {
     printf("\nFound\n");
   }
   if(flag==0)
   {
     printf("\nNot Fount\n");
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
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
   printf("\nSearch Node:");
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
       printf("Found\n");
   }
   if(flag==0)
   {
       printf("Not Found\n");
   }

   while(list->next!=NULL)
   {
      printf("%d ",list->data);
      list=list->next;
   }
   printf("%d",list->data);


getch();
}

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
     int s1,s2;
     struct node *list,*nptr,*tptr,*pptr;
     clrscr();
     list=NULL;
   while(1)
   {

       //nptr=(struct node*)malloc(sizeof(struct node));
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
   printf("Enter a node for swap:");
   scanf("%d",&s1);
   printf("Enter a node for swap:");
   scanf("%d",&s2);
   tptr=list;
   while(1)
   {
      while(tptr->data!=s1)
      {
	 pptr=tptr;
	 tptr->back=pptr;
	 tptr=tptr->next;
      }
      tptr->data=s2;
      tptr=tptr->next;
      while(tptr->data!=s2)
      {
	 pptr=tptr;
	 tptr->back=pptr;
	 tptr=tptr->next;
      }
      tptr->data=s1;
      pptr=tptr;
      tptr->back=pptr;
      pptr->next=tptr->next;
      break;
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

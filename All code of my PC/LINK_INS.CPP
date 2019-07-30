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
     struct node *list,*nptr,*tptr,*nptr1;
     clrscr();
     list=NULL;
     printf("\ninput a number 0 or 1:");
     scanf("%d",&item);

   while(item==1)
   {

       nptr=(struct node*)malloc(sizeof(struct node));
       nptr=new(node);
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
      printf("do u continue....");
      scanf("%d",&item);
   }

	      /*FOR INSERT A LINK LIST*/
       nptr1=(struct node*)malloc(sizeof(struct node));
       nptr1=new(node);
       printf("\n Insertion data:");
       scanf("%d",&nptr1->data);
       nptr1->next=NULL;

   for( ; ; )
   while(list->data!=NULL)
   if(list->data > nptr1->data)
      {

       temp=nptr1->data;
       list->data=nptr1->data;
       nptr1->data=temp;
       list=list->next;
      }

   jump:
   if(list->next!=NULL)
   {
       printf("%d   ",list->data);
       list=list->next;

       goto jump;
    }
  else
       printf("%d",list->data);

getch();
}

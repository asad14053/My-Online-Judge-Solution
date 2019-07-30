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
     int item;
     struct node *list,*nptr,*tptr;
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



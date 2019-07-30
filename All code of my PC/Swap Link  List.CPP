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
     int s1,s2;
     struct node *list,*nptr,*tptr,*pptr,*mptr;
     clrscr();
     list=NULL;
   while(1)
   {

       nptr=(struct node*)malloc(sizeof(struct node));
       nptr=new(node);
       printf("Press 0 For Exit Ibput:");
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
   printf("Press a First node that U will swap:");
   scanf("%d",&s1);
   printf("Press a Second node that U will swap:");
   scanf("%d",&s2);
   tptr=list;
   while(1)
   {
     while(tptr->data!=s1)
     {
	 pptr=tptr;
	 tptr=tptr->next;
     }
     tptr->data=s2;
     tptr=tptr->next;
      while(tptr->data!=s2)
      {
	 pptr=tptr;
	 tptr=tptr->next;
      }
      tptr->data=s1;
      pptr=tptr;
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



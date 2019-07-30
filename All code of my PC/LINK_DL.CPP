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
     int item,dlv;
     struct node *list,*nptr,*tptr,*pptr;
     clrscr();
     list=NULL;
     printf("\ndelet value:");
     scanf("%d",&dlv);
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
   while(tptr->data!=dlv)
     {
	pptr=tptr;
	tptr=tptr->next;
     }
  delete(tptr);
  pptr->next=tptr->next;
   jump:
   if(pptr->next!=NULL)
   {
       printf("%d   ",pptr->data);
       pptr=pptr->next;
       goto jump;
    }
   else
       printf("%d",pptr->data);
   getch();
}

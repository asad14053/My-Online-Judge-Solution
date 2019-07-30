#include<stdio.h>
#include<conio.h>

struct node
{
node *back;
int data;
node *next;
};

void main()
{
	struct node *nptr,*list,*tptr,*temp;
	 int n,flag;
		clrscr();
	list=0;
	while(1)
	{
	  nptr=new(node);
	  nptr->back=0;
	  printf("press 999 for exit=\n\n");
	  scanf("%d",&nptr->data);
	  nptr->next=0;



	  if(list==0)
	  {
	  list=nptr;
	  tptr=list;
	  }
	  else
	  {
	  tptr->next=nptr;
	  nptr->back=tptr;
	  tptr=tptr->next;
	  } if(nptr->data==999)
	  break;
	  }
	  while(1)
	  {
	  printf("do u want to search a node?");
	  printf(" \n\npress 1 for search && 0 for exit=");
	  scanf("%d",&n);
	  tptr=list;
	  if(n==1)
	  {
	  nptr=new(node);
	  nptr->back=0;
	  printf("\n\nenter your value=");
	  scanf("%d",&nptr->data);
	  nptr->next=0;
	       tptr=list;
	      flag=0;

	   while(tptr->next!=0);
	   {
	    tptr=tptr->next;
	   if(tptr->data==nptr->data)
	   {
	   flag=1;
	   break;
	   }

	  }
	  while(1)
	  {
	  nptr->next=list;
	  list->back=nptr;
	  if(list->data==nptr->data)
	  {
	  flag=1;
	  break;
	  }
	    }
	   }
	   else	    break;
	  }
	  if(flag==1)
	  printf("\n\nthe node is found");
	  else
	  printf("\n\nthe node you entered is not found");

 getch();
}

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
	 int n;
		clrscr();
	list=0;
	while(1)
	{
	  nptr=new(node);
	  nptr->back=0;
	  printf("press 999 for exit=");
	  scanf("%d",&nptr->data);
	  nptr->next=0;
	  if(nptr->data==999)
	  break;


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
	  }
	  }
	  while(1)
	  {
	  printf("do u wnt to insert a node?");
	  printf(" \n\npress 1 for insert && 0 for exit=");
	  scanf("%d",&n);
	  tptr=list;
	  if(n==1)
	  {
	  nptr=new(node);
	  nptr->back=0;
	  printf("enter your value=");
	  scanf("%d",&nptr->data);
	  nptr->next=0;
	   while(tptr->next!=0)
	   {
	     tptr=tptr->next;
	   }
	     tptr->next=nptr;
	      nptr->back=tptr;

	  } else break;
	  }

	  while(list->next!=0)
	  {
	  printf("%d ",list->data);
	  list=list->next;
	  }
	  printf("%d ",list->data);

 getch();
}

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

	  while(list->next!=0)
	  {
	  printf("%d ",list->data);
	  list=list->next;
	  }
	  printf("%d ",list->data);
	  printf("\n\n");
	   while(list->back!=0)
	  {
	  printf("%d ",list->data);
	  list=list->back;
	  }
	  printf("%d ",list->data);


 getch();
}

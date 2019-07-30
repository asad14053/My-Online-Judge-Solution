#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct node
{
node *back;
int data;
node *next;
};
void main()
{
clrscr();
struct node *list,*nptr,*tptr;
while(1)
	{
	nptr=(struct node*)malloc(sizeof(struct node));
	nptr=new(node);
	printf("press 999 to exist=");
	scanf("%d",&nptr->data);
	nptr->back=NULL;
	nptr->next=NULL;
	 if(list!=NULL)
	 {
	 tptr->next=nptr;
	 nptr->back=tptr;
	}
	  if(nptr->data==999)
	  break;
	  }
	while(1)
	{
	printf("%d ",list->data);
	list=list->next;
	}

	getch();
}
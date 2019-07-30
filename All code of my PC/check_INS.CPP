#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0

	struct node
	{
	int data;
	node *next;
	};

int main()
{

clrscr();

struct node *list,*nptr,*tptr,*temp;
int n;

list=NULL;
while(1)
{
nptr=new(node);
nptr->next=NULL;
printf("press 999 to exist=");
scanf("%d",&nptr->data);
	if(list==NULL)
	{
	list=nptr;
	tptr=list;
	}

	else
	{
	tptr->next=nptr;
	tptr=nptr;
	}
if(nptr->data==999)
break;
}
while(1)
{
printf("\n\n1 for insert :o for exit= ");
scanf("%d",&n);


if(n==1)
	{
	printf("do u want to insert a value?");
	nptr=new(node);
	nptr->next=NULL;
	printf("\n\nenter the value=");
	scanf("%d",&nptr->data);
	tptr=list;
	while(tptr->next->data<nptr->data)
	{
	tptr=tptr->next;
	}
	temp=tptr->next;
	tptr->next=nptr;
	nptr->next=temp;
	}
	else break;
	}

	while(list->next!=NULL)
	{
	printf("%d  ",list->data);
	list=list->next;
	}

	getch();
	}

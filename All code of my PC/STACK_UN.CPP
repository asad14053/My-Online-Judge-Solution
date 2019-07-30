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
	struct node *stack,*nptr,*tptr;
	int n;
	stack=NULL;
	while(1)
	{
		nptr=new(node);
		printf("press 999 for exit=");
		scanf("%d",&nptr->data);
		nptr->next=NULL;

		if(nptr->data==999)
			break;

		if(stack==NULL)
		{
			stack=nptr;

			}
		else
		{
		nptr->next=stack;;
			stack=nptr;


		}
	 }
	 while(1)
	 {
	 printf("do you want to insert?");
	 printf("\n\npress 1 for insert :or 0 for exit");
	 scanf("%d",&n);
	 if(n==1)
	 {

		nptr=new(node);
		printf("\n\n\nenter the value=");
		scanf("%d",&nptr->data);
		nptr->next=NULL;
		nptr->next=stack;
		stack=nptr;
	 }

	  else
	  break;

	 }
	 printf("");
		while(stack->next!=NULL)
		{
			printf("\n%d ",stack->data);
			stack=stack->next;
		}

		printf("\n%d",stack->data);
	getch();
}
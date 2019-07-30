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
	int n,m                 
	stack=NULL;
	while(1)
	{
		nptr=new(node);
		printf("press for exit m=");
		scanf("%d",&nptr->data);
		nptr->next=NULL;

			if(nptr->data==999)
			break;

		if(stack==NULL)
		{
			stack=nptr;
			//tptr=nptr;

			}
		else
		{
		nptr->next=stack;
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

	 stack=	stack->next;
	       //tptr=nptr;
	 }

	  else
	  break;

	 }
	 printf("\n");
		while(stack->next!=NULL)
		{
			printf("%d ",stack->data);
			stack=stack->next;
		}

		printf(" %d",stack->data);
	getch();
}
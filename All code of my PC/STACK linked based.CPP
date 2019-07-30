#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	node *next;
};
void show(struct node *stack)
{
	struct node *tptr=stack;
	printf("\nData in the stack:\n");
	while(tptr!=NULL)
	{
		printf(" %d",tptr->data);
		tptr=tptr->next;
	}
	printf("\n");
}
void main()
{
	clrscr();
	struct node *nptr,*stack=NULL,*tptr;

	printf("\n1.push\n2.pop\n3.exit\n");
	while(1)
	{
		switch(getche())
		{
			case '1':	printf("\n\nEnter data to the stack:");
						int end=1;
				while(end)
				{
					nptr=new(node);
					scanf("%d",&nptr->data);
					nptr->next=NULL;
					if(stack==NULL)
					{
						stack=nptr;
					}
					else
					{
						nptr->next=stack;
						stack=nptr;
					}
					end=0;
				}
				show(stack);
				break;
			case '2':   if(stack->next==NULL)
							printf("\nThe stack is underflow.\n");
						else
						{
							stack=stack->next;
							delete(nptr);
							nptr=stack;       //nptr or stack should delete
							show(stack);      //next time pop
						}
						break;
			case '3':  	exit(0);
			default : 	printf("Invalid selection.");
						break;
		}
	}
}
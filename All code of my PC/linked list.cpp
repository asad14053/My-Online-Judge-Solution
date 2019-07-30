#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	node *next;
};
void show(struct node *tptr)
{
	printf("\nThe linked list is:");
	while(tptr!=NULL)
	{
		printf(" %d",tptr->data);
		tptr=tptr->next;
	}
}
void main()
{
	clrscr();
	int item,key;
	node *nptr,*tptr,*list=NULL,*del;
	printf("Enter data in the linked list:\nFor stop press 999.\n");
	while(1)
	{
		scanf("%d",&item);
		if(item==999)
			break;
		nptr=new(node);
		nptr->data=item;
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
	}
	show(list);
	tptr=list;
	printf("\n\n0.Insetr Begining\n1.Insert Later\n2.Delete\n3.exit\n");
	while(1)
	{
		switch(getche())
		{
		case '0':   printf("\nEnter item:");
					scanf("%d",&item);
					nptr=new(node);
					nptr->data=item;
					nptr->next=list;
					list=nptr;
					show(list);
					break;
		case '1':	printf("\nEnter key:");
					scanf("%d",&key);
					printf("\nEnter item:");
					scanf("%d",&item);
					tptr=list;
					int p=1;
					while(tptr!=NULL)
					{
						if(tptr->data==key)
						{
							nptr=new(node);
							nptr->data=item;
							nptr->next=tptr->next;
							tptr->next=nptr;
							p=0;
							break;
						}
						tptr=tptr->next;
					}
					if(p==1)
							printf("\nInvalid key.");
					show(list);
					break;
		case '2':	printf("\nEnter item:");
					scanf("%d",&item);
					tptr=list;
					int q=1;
					while(tptr!=NULL)
					{
						if(tptr->data==item)
						{
							del=tptr;           // del=list
							tptr=tptr->next;    // list=list->next
							list=tptr;          // delete(del)
							delete(del);
							q=0;
							break;
						}
						else if(tptr->next->data==item)
						{
							del=tptr->next;
							tptr->next=tptr->next->next;
							delete(del);
							q=0;
							break;
						}
						tptr=tptr->next;
					}
					if(q==1)
							printf("\nInvalid item.");
					show(list);
					break;
		case '3':	exit(0);
		default:	printf("Invalid selectiion.");
		}
	}
}
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

	if(nptr->data==999)
		break;

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

	}





	while(list->next!=NULL)
	{
		list=list->next;
	printf("%d  ",list->data);

	}

 getch();
 }
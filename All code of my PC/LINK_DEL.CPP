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
printf("\n\n1 for delete : ");
scanf("%d",&n);


if(n==1)
{
	printf("do u want to delete a value?");
	nptr=new(node);
	nptr->next=NULL;
	printf("\n\nenter the value=");
	scanf("%d",&nptr->data);
	tptr=list;
	while(tptr->next->data!=nptr->data)
	{
	tptr=tptr->next;
	}
	temp=tptr->next->next;
	tptr->next=temp;

	while(list->next!=NULL)
	{
	printf("%d  ",list->data);
	list=list->next;
}
}	}

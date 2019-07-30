#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct node
{
int data;
node *next;
};
void main()
{
clrscr();
struct node *list,*nptr,*tptr,*temp;
int n,m;
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
printf("\n\n1 for SEARCH : ");
scanf("%d",&n);


if(n==1)
{
	printf("do u want to search a value?");
	nptr=new(node);
	nptr->next=NULL;
	printf("\n\nenter the value=");
	scanf("%d",&nptr->data);
	tptr=list;
	 int flag=0;
	do

	{

	if(list->data==nptr->data)
	{
	flag=1;
	break;
	}
	list=list->next;
	}	while(list->next!=NULL);
	if(flag==1)
	{
	printf("\n\n the node is found ");
	}
	else
	printf("\n\nthis node is not found");

}
getch();
}


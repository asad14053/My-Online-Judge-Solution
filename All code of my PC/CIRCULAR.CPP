//#include<iostream>
#include<stdio.h>
#include<conio.h>
#define null 0
//using namespace std;
struct node 
{
	int info;
	node *next;
};
int main()
{
	int n=1;
	struct node *list,*tptr,*temp,*nptr;
	list=null;

	while(n==1)
	{
		nptr=new node;
		scanf("%d",nptr->info);
		nptr->next=null;
		if(list==null)
		{
			list=nptr;
			tptr=nptr;
			temp=nptr;
		}
		else
		{
			tptr->next=nptr;
			tptr=nptr;
			nptr->next=temp;
		}

		printf("Continue 1....");
		scanf("%d",&n);
	}
	while(list->next)
	{
		printf("%d",list->info);
		list=list->next;
		if(list==temp)
		{
			break;

		}
		 printf("%d",list->info);
	}
	getch();
	return 0;
}
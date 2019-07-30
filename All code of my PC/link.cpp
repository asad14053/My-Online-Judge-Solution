#include<iostream>
#include<stdio.h>
#include<conio.h>
#define null 0
using namespace std;
struct node
{
	int data;
	node* next;
};
int main()
{
	int n,m,item;
	struct node *list,*nptr,*tptr,*temp;
	list=null;
	while(1)
	{
		
		cout<<"Insertion 1 pass.";
		cin>>n;
		if(n==1)
		{
			nptr=new(node);
			cout<<"Enter data in list";
			cin>>nptr->data;
			nptr->next=null;
			if(list==null)
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
		else
		{
			break;
		}
	}
	
/*
	while(1)
	{
		cout<<"If you want to insertion pass 2...";
	    cin>>m;

		if(m==2)
		{
	
		nptr=new node;
		cout<<endl<<"Enter value .";
		cin>>nptr->data;
		nptr->next=null;
			if(tptr->next==null)
			{
				tptr->next=nptr;
				tptr=nptr;
				
			}
		}
		else
		{
			break;
		}
	}*/
	cout<<"Enter value of item.";
	cin>>item;
	nptr=new node;
	cout<<endl<<"Enter insertion value.";
	cin>>nptr->data;
	nptr->next=null;
	while(list->next!=null)
	{
        cout<<","<<list->data;
		list=list->next;

         if(list->data==item)
		   { 
			cout<<","<<list->data;
			temp=list->next;
			list->next=nptr;
			list=nptr;
            list->next=temp;
			
		}
		
		if(list->next==null)
		{
			cout<<","<<list->data;
			break;
		}
		

	}
   
	getch();
	return 0;
}

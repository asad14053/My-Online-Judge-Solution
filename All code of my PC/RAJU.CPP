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
    int item;
    struct node *list,*nptr,*tptr;
    clrscr();
    list=NULL;
    printf("\nPress 0 or 1 to be continue:");
    scanf("%d",&item);

    while(item!=0){

	nptr=new(node);
	scanf ("%d",&nptr->data);
	nptr->next=NULL;

	if(list==NULL){
	    list=nptr;
	    tptr=nptr;
	   }

	else{
	    tptr->next=nptr;
	    tptr=nptr;
	    }
	 printf("Do you cntinue: ");
	 scanf("%d",&item);
      }

       while(list->next!=0){
	   printf("%d ",list->data);
	   list=list->next;

       }

	   printf("%d  ",list->data);

  getch();
  }







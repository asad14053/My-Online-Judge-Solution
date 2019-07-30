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
    clrscr();
    struct node *list,*nptr,*tptr;
    list=NULL;
    printf("\nPress 0 or 1 to be continue:");
    scanf("%d",&item);

    while(item!=0){
	//nptr=(struct node*)malloc(sizeof(struct node));
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
      printf("Insertion data:");
      nptr=new(node);
      scanf("%d",&nptr->data);
      nptr->next=NULL;
      while(list->next==NULL)
	   list->next=nptr;
      while(list->next!=0){
	   printf("%d ",list->data);
	   list=list->next;

       }
       printf("%d  ",list->data);

  getch();
  }

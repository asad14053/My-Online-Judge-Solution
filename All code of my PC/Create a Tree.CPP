#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct node
   {
     int data;
    // node* ;
   };

void main()
{
     struct node *tree,*left,*right,*newnode;
     clrscr();
     tree=NULL;
     //left=NULL;
     //right=NULL;
while(1)
   {
       printf("Press 999 for exit:");
       nptr=new(node);
       scanf("%d",&nptr->data);
       newnode->right=NULL;
       newnode->left=NULL;
       if(nptr->data==999)
       {
	   break;
       }
   if(tree==NULL)
      {
	  tree=newnode;
	  left=;
	  right=nptr;
      }
   else
      {
	  left->next=nptr;
	  left=nptr;
	  right->next=nptr;
	  right=nptr;
      }
   }
 while(tree->next!=NULL)
   {
       printf("%d ",tree->data);
       tree=tree->next;
   }
   printf("%d",tree->data);
   getch();
}


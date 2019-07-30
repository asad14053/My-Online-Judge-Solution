#include<stdio.h>
#include<conio.h>
struct node* insert(struct node*r,struct node*n);
void inorder(struct node*r);
int item;
struct node
{
   node* left;
   int data;
   node* right;
};
int main()
{
  int n,item;
  struct node*nptr,*root=0;
  while(1)
  {
	clrscr();
	printf("\nFor Insertion press 1:\nFor Display press 2:");
	scanf("%d",&n);
	if(n==1)
	{
	   nptr=new (node);
	   printf("\n\n\n\tEnter Tree Item:");
	   scanf("%d",&nptr->data);
	   nptr->left=0;
	   nptr->right=0;
	   root=insert(root,nptr);
	}
	else
	{
	   printf("\nDelete item:");
	   scanf("%d",&item);
	   inorder(root);
	   break;
	}
   }
   getch();
   return 0;
  }
  struct node* insert(struct node*r,struct node*n)
  {
      if(r==0)
      {
	 r=n;
      }
      else if(r->data<=n->data)
	 r->right=insert(r->right,n);
      else if(r->data>n->data)
	 r->left=insert(r->left,n);
      return r;
 }
 void inorder(struct node*r)
 {
      if(r)
      {

	 if(r->data==item);
	 {
	     delete r;
	     inorder(r->left);
	     printf("%d ",r->data);
	     inorder(r->right);
	 }
	 if(r->data!=item)
	 {
	     inorder(r->left);
	     printf("%d ",r->data);
	     inorder(r->right);
	 }
      }
 }
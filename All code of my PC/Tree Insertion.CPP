#include<stdio.h>
#include<conio.h>
struct node* insert(struct node*r,struct node*n);
void  inorder(struct node *r);
struct node
{
  node* left;
  int data;
  node* right;

};

int main()
{
  struct node*nptr,*root=0;
  int n;
  while(1)
  {
     clrscr();
     printf("1 for insert:\n2 for display:\n");
     scanf("%d",&n);
     if(n==1)
     {
	nptr=new node;
	printf("\n\n\tEnter The Number :");
	scanf("%d",&nptr->data);
	nptr->left=nptr->right=0;
	root=insert(root,nptr);

     }
     else
     {

	printf("\nInseret item:");
	nptr=new node;
	scanf("%d",&nptr->data);
	nptr->left=nptr->right=0;
	root=insert(root,nptr);
	inorder(root);
	break;
     }

  }
 printf("\nROOT=%d",root->data);
 getch();
 return 0;
}
struct node*insert(struct node*r,struct node*n)
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


void  inorder(struct node *r)
 {
    if(r)
    {
      inorder(r->left);
      printf("%d ",r->data);
      inorder(r->right);
    }
 }







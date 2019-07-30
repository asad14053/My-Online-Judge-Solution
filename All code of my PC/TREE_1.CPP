#include<stdio.h>
#include<conio.h>
struct node*insert(struct node*r,struct node*n) ;
void  inorder(struct node *r);
struct node
{
 node*left;
  int data;
  node*right;

};

int main()
{
  struct node*nptr;
  struct node*root=0;
  clrscr();
  int n;
  while(1)
  {
     clrscr();
     printf("1 for inset:\n2 for display:");
     scanf("%d",&n);
     if(n==1)
     {
	nptr=new node;
	printf("\n\n\tEnter The Number :");
	scanf("%d",&nptr->data);
	nptr->left=nptr->right=0;
	root=insert(root,nptr);
	//break;
     }
     else
     {
       inorder(root);
	break;
     }

  }
  getch();
 return 0;
}
struct node*insert(struct node*r,struct node*n)
 {
   if(r==0)
   {
     r=n;
    // r->left=0;
     //r->right=0;
   }
   else if(r->data<n->data)
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







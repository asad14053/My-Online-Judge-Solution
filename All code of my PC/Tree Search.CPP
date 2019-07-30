#include<stdio.h>
#include<conio.h>
struct node* insert(struct node*r,struct node*n);
void inorder(struct node*r,int i);
int tree[30],item;
struct node
{
   node* left;
   int data;
   node* right;
};
int main()
{
  int n,j=0,l=1,flag=0;
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
	   printf("\nSearch item:");
	   scanf("%d",&item);
	   inorder(root,j);
	   break;
	}
   }
  while(1)
  {
   if(tree[l]==item)
   {
     flag=1;
     break;
   }
   else if(tree[l]==0)
   {
     flag=0;
     break;
   }
   else if(tree[l]!=item)
   {
     flag=0;
   }
   l++;
  }
  if(flag==1)
  {
    printf("Found");
  }
  if(flag==0)
  {
    printf("Not Found");
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
 void inorder(struct node*r,int i)
 {
      if(r)
      {
	 int k;
	 k=i+1;
	 tree[k]=r->data;
	 inorder(r->left,k);
	 printf("%d ",r->data);
	 inorder(r->right,k);
      }
 }
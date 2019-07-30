#include<stdio.h>
#include<conio.h>
inorder(struct node*current_root);
postorder(struct node*current_root);
preorder(struct node*current_root);

struct node *insert(struct node *t_root,struct node *nptr_node );
struct node
{
int data;
node *right;
node *left;
};

//typedef struct node Sherching;

int main()
{
  int number;
  struct node *root=0,*n_node;
  clrscr();
  while(1)
  {
   clrscr();
  printf("Enter value for insert 1\nfor inoder 2, postorder 3 and preoder 4");
  scanf("%d",&number);
if(number==1)
  {
	n_node=new(node);
	printf("Enter data ");
	scanf("%d",&n_node->data);
	root=insert(root,n_node);

      }
else if(number==2)
      {
       inorder(root);
       break;
       }
else if(number==3)

       {
       preorder(root);
       break;

      }
else if(number==4)
       {
       postorder(root);
       break;
      }

}
getch();
return 0;
}

struct node *insert(struct node *t_root,struct node *nptr_node )
   {
	    if(t_root==0)
	      {
	       t_root=nptr_node;
	      }

	  else if(t_root->data<nptr_node->data)
	      t_root->right=insert(t_root->right,nptr_node);
	 else if(t_root->data>nptr_node->data)
	      t_root->left=insert(t_root->left,nptr_node);
		 

	      return t_root;
  }
inorder(struct node *current_root)
{
  if(current_root)
  {
  inorder(current_root->left);
  printf("%d  ",current_root->data);
  inorder(current_root->right);

  }
return 0;
}

preorder(struct node *current_root)
{
  if(current_root)
  {
  printf("%d  ",current_root->data);
  preorder(current_root->left);
  printf("%d  ",current_root->data);
  preorder(current_root->right);

  }
return 0;
}
postorder(struct node *current_root)
{
  if(current_root)
  {

  postorder(current_root->left);
  postorder(current_root->right);
  printf("%d  ",current_root->data);

  }
return 0;
}


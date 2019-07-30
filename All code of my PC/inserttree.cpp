#include<iostream>
#include<conio.h>
using namespace std;
typedef struct node *SearchTree;
typedef struct none *rtree;

 int insert(int x,SearchTree T );
struct node
{
	int data;
	node *left;
	node *right;
};
struct node *root,*n_root;
root=0;
int main()
{
	int number=0;
	cout<<"Do you want to exit pass (0) "<<endl;
	cout<<"Enter the Tree value pass 1"<<endl;
	cin>>number;
	while(number==1)
	{
		n_root=new(node);
		cout<<endl<<"Enter value of tree ";
		cin>>n_root->data;
		root=insert(n_root->data,n_root );
		cout<<"continue for 1   ::";
		cin>>number;
	}
  getch();
  return 0;
}
rtree insert(int x,SearchTree T)
  {
	  if(T==null)
	   {
		  T=new(node);
		  if(T==null)
		  {
		  cout<<"out of space";
		  }
		  else
		  {
			  cout<<" Enter value of tree :";

			  T->data=x;
			  T->left=T->right=null;
		  }
	  }
	  else if(x>T->data)
	  {
		  T->left=insert(x,T->left);

	  }
	  else if(x<T->data)
	  {
		  T->right=insert(x,T->right);
	  }
	  return T;

  }

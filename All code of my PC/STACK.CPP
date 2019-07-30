#include<iostream>
struct node
{
	int data;
	node* next;
};
struct node *stack,*n_node;
int main()
{
	stack=0;
	cout<<"Enter value 'n' for out of the loop:\n";
	for(;;)
	{
		n_node=new(node);
		cout<<"enter value: ";
		cin>>n_node->data;
		n_node->next=0;
		if(n_node->data==8)
		{
			break;
		}
		if(stack==0)
		{
			n_node->next=stack;
		}
		else
		{
			n_node->next=stack;
			stack=n_node;
		}
	}
for(;;)
{
	stack=stack->next;
	cout<<stack;
	if(stack->next==0)
	{
		cout<<stack->data;
		break;
	}
}
return 0;
}
	


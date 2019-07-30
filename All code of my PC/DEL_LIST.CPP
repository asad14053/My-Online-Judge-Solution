/*delete  top  location in stack*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
 struct  node
  {
    int data;
    node *next;
  }*stack,*new_node;

void main()
{
stack=NULL;
printf("Type negative number when  finished.\n");
do
{
new_node=(node *)malloc(sizeof(node));
scanf("%d",&new_node->data);
new_node->next=NULL;
if(new_node->data<0)
{
new_node=NULL;
}
else
{
if(stack==NULL)
{
stack=new_node;
}
else
{
new_node->next=stack;
stack=new_node;
}
}
}while(new_node!=NULL);

stack=stack->next;


while(stack!=NULL)
{
printf(" %d",stack->data);
stack=stack->next;
}





getch();


}








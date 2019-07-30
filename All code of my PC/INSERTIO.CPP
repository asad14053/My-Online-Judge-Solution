#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define null 0
struct linked_list
{
int number;
struct linked_list *next;
};
  typedef struct linked_list node;
void  main()
  {
  int n;
  node *head;
  void create(node *p);
  node *insert(node *p,int n);
  void print(node *p);
  head=(node *)malloc(sizeof(node));
  create(head);
  printf("\n");
  printf("orginal list:");
  print(head);
  printf("\n\n");
  printf("input number to be inserted:");
  scanf("%d",&n);
  head=insert(head,n);
  printf("\n");
  printf("new list: ");
  print(head);
  getch();
    }
void create(node *list)
{
printf("input number :\n ");
printf("(type_1 at end):");
scanf("%d",& list->number);
if(list->number==-1)
{
list->next=NULL;
}
else
{
list->next=(node *)malloc(sizeof(node));
create(list->next);
}
//return;
}
void print(node *list)
{
if(list->next!=NULL)
{
printf("%d-->",list->number);
if(list->next->next==NULL)
printf("%d",list->next->number);
print(list->next);
}
return;
}
 node *insert(node *head,int x)
{
node *p1,*p2,*p;
p1=NULL;
p2=head;
for(;p2->number<x;p2=p2->next)
{
p1=p2;
if(p2->next->next==NULL)
{
p2=p2->next;
break;
}
}
p=(node *)malloc(sizeof(node));
p->number=x;
p->next=p2;
if(p1==NULL)
head=p;
else
     p1->next=p;
     return(head);
     }






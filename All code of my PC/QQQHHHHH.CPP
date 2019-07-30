#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct linked_list
{
int number;
struct linked_list *next;
};
typedef struct linked_list node;
void main()
{
clrscr();
node *head;
void create(node *p);
void print(node *p);
int count(node *p);
head=(node *)malloc(sizeof(node));
create(head);
printf("\n");
print(head);
printf("\n");
printf("the number of element is=%d\n:",count(head));
getch();
// return 0;
}

void create(node *list)
{
printf("input a number\n");
printf("type -1 at end:");
scanf("%d",&list->number);
if(list->number==-1)
{
list->next=NULL;
}
else
{
list->next=(node *)malloc(sizeof(node));
create(list->next);
}
return;
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

int count(node *list)
    {
    if(list->next==NULL)
    return(0);
    else
    return(1+count(list->next));
    }

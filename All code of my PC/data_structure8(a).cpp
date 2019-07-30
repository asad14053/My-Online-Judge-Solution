#include<bits/stdc++.h>
using namespace std;
#include<malloc.h>
void at_end(int);
void at_start(int);
void after(int,int);
void before(int,int);
void remove(int);
void display();

struct node
{
    int INF;
    struct node *link;
}*start=NULL;

main()
{
    int data,choice,pos;
    char status;
    cout<<"1=Enter data at the end of the list.\n\n 2=Enter data at the starting of list.\n\n 3=Enter data after specified element.\n\n 4=Enter data before specified element.\n\n 5=Remove an element from list.\n\n 6=Display list.\n";
    do
    {
        printf(" Enter your choice :\n");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
            printf("Enter data you want to add in that list.\n");
            scanf("%d",&data);
            at_end(data);
            break;

        case 2:
            printf("Enter data you want to add at the starting of the list\n");
            scanf("%d",&data);
            at_start(data);
            break;

        case 3:
            printf("Enter data which you want to add after that positioned data\n");
            scanf("%d",&pos);
            printf("Enter data you want to add after %d \n",pos);
            scanf("%d",&data);
            after(data,pos);
            break;

        case 4:
            printf("Enter data which you want to add before that positioned data\n");
            scanf("%d",&pos);
            printf("Enter data you want to add before %d \n",pos);
            scanf("%d",&data);
            before(data,pos);
            break;

        case 5:
            printf("Enter data which you want to delete\n");
            scanf("%d",&data);
            remove(data);
            break;

        case 6:
            display();
            break;

        default:
            printf("Are you blind ?\n");
            break;
        }

        fflush(stdin);
        printf("\nDo you want to continue ? y/n \n");
        scanf("%c",&status);
    }
    while(status=='y');
//getch();
}
/*........ Add data at the end......... */

void at_end(int data)
{
    struct node *ptr,*NEW;
    NEW=(struct node*)malloc(sizeof(struct node));
    NEW->INF=data;
    NEW->link=NULL;
    if(start==NULL)
        start=NEW;
    else
    {
        ptr=start;
        while((ptr->link)!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=NEW;
    }
}
/*........ Add data at the start .......*/

void at_start(int data)
{
    struct node *NEW;
    NEW=(struct node*)malloc(sizeof(struct node));
    NEW->INF=data;
    NEW->link=NULL;
    if(start==NULL)
        start=NEW;
    else
    {
        NEW->link=start;
        start=NEW;
    }
}
/*........ Add data after given node........*/

void after(int data,int pos)
{
    struct node *ptr,*NEW;
    NEW=(struct node*)malloc(sizeof(struct node));
    NEW->INF=data;
    NEW->link=NULL;
    ptr=start;
    while(((ptr->INF)!=pos) && (ptr!=NULL))
        ptr=ptr->link;
    if(ptr!=NULL)
    {
        NEW->link=ptr->link;
        ptr->link=NEW;
    }
    else
        printf("No such element exist\n");
}
/*........ Add data before given node........*/

void before(int data,int pos)
{
    struct node *ptr,*NEW;
    NEW=(struct node*)malloc(sizeof(struct node));
    NEW->INF=data;
    NEW->link=NULL;
    ptr=start;
    if(ptr->INF==pos)
    {
        NEW->link=start;
        start=NEW;
    }
    else
    {
        while((((ptr->link)->INF)!=pos) && (ptr!=NULL))
        {
            ptr=ptr->link;
        }
        if(ptr!=NULL)
        {
            NEW->link=ptr->link;
            ptr->link=NEW;
        }
        else
            printf("No such element exist\n");
    }
}
/*........ Delete data/node from the linked list........*/

void remove(int data)
{
    struct node *ptr;
    ptr=start;
    if(ptr->INF==data)
    {
        start=ptr->link;
    }
    else
    {
        ptr=(ptr->link);
        while(((ptr->INF)!=data) && (ptr!=NULL))
            ptr=ptr->link;
        if(ptr!=NULL)
            ptr->link=(ptr->link)->link;
        else
            printf("No such element exist\n");
    }
}
/*........ Display all the data after modification........*/

void display()
{
    struct node *ptr;
    if(start==NULL)
        printf("List is empty\n");
    else
    {
        ptr=start;
        printf("\n List is : ");
        do
        {
            printf("%d-->",ptr->INF);
            ptr=ptr->link;
        }
        while(ptr!=NULL);
        printf("\n");
    }
}


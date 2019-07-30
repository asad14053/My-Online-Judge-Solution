#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;               //two way
    int value;
    struct node *next;
}*head=NULL;
int create_list(int num)
{
    node *ptr1,*ptr;
    ptr=(node*)malloc(sizeof(struct node));
    ptr->value=num;
    ptr->next=NULL;
    if(head==NULL)
    {
        cout<<"-----"<<endl;
       ptr->prev=NULL;
        head=ptr;
    }
    else
    {
        ptr1=head;
        while(ptr1->next!=NULL)
            ptr1=ptr1->next;
        ptr1->next=ptr;
        ptr->prev=ptr1;
    }
    return 0;
}
int addatbeg(int num)
{
    node *ptr,*ptr1;

    ptr=(node*)malloc(sizeof(struct node));
    ptr->prev=NULL;
    ptr->value=num;
    ptr->next=head;
    head->prev=ptr;
    head=ptr;
    return 0;
}
int addafter(int num,int pos)
{
     node *ptr,*ptr1;

    ptr1=head;
    for(int i=1; i<pos; i++)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL)
        {
            printf ("\nThere are less than %d elements\n",pos);
            //return;
        }
    }
    ptr=(node*)malloc(sizeof(struct node) );
    ptr->value=num;
    ptr1->next->prev=ptr;
    ptr->next=ptr1->next;
    ptr->prev=ptr1;
    ptr1->next=ptr;
    return 0;
}
int del()
{
    struct node *ptr,*ptr1;
    cout<<"which type you want to do??\n1=1st delete\n2=mid delete\n3=last delete"<<endl;
    int a,k;
    cout<<"enter choice:"<<endl;
    cin>>a;
    if(a==1)
    {

        head=head->next;
        head->prev=NULL;
    }
    else if(a==2)
    {
        cin>>k;
        ptr=head;
        while(ptr->value!=k)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=ptr->next;

    }
    else if(a==3)
    {
        struct node *ptr,*ptr1;
        ptr=head;

        while(ptr->next!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=NULL;
    }
    return 0;

}
int display()
{
    node *ptr1,*ptr;
    if(head==NULL)
    {
        printf("\nList is empty\n");
    }
    ptr1=head;
    printf("\nList is :\n");
    while(ptr1!=NULL)
    {
        cout<<ptr1->prev<<" "<<ptr1->value<<" "<<ptr1->next<<endl;
        ptr1=ptr1->next;
    }
    printf("\n");
    return 0;
}
int count()
{
    node *ptr1=head;
    int cnt=0;
    while(ptr1!=NULL)
    {
        ptr1=ptr1->next;
        cnt++;
    }
    printf("\nNumber of elements are %d\n",cnt);
    return 0;
}
int rev()
{
    node *p1,*p2;
    p1=head;
    p2=p1->next;
    p1->next=NULL;
    p1->prev=p2;
    while(p2!=NULL)
    {
        p2->prev=p2->next;
        p2->next=p1;
        p1=p2;
        p2=p2->prev;
    }
    head=p1;
    return 0;
}
int main()
{
    int choice,n,m,po,i;
    head=NULL;
    while(1)
    {
        printf("\n1.last insert\n");
        printf("2.insert at begining\n");
        printf("3.mid after\n");
        printf("4.Delete\n");
        printf("5.Display\n");
        printf("6.Count\n");
        printf("7.Reverse\n");
        printf("8.exit\n");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nHow many nodes you want:");
            scanf("%d",&n);
            for(i=0; i<n; i++)
            {
                printf("\nEnter the element:");
                scanf("%d",&m);
                create_list(m);
            }
            break;
        case 2:
            printf("\nEnter the element:");
            scanf("%d",&m);
            addatbeg(m);
            break;
        case 3:
            printf("\nEnter the element:");
            scanf("%d",&m);
            printf("\nEnter the position:\n");
            scanf("%d",&po);
            addafter(m,po);
            break;
        case 4:
            del();
            break;
        case 5:
            display();
            break;
        case 6:
            count();
            break;
        case 7:
            rev();
            break;
        case 8:
            exit(0);
        default:
            printf("\nWrong choice\n");

        }
    }
    return 0;
}

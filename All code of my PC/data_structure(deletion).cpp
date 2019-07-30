#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *next;

};
struct node *head=0,*head1=0,*head2=0,*ptr,*ptr1;int x;
node at_first()
{
    int a;
    struct node *head,*ptr,*ptr1;
    ptr=(struct node*)malloc(sizeof(struct node));
    cin>>a;
    ptr->value=a;
    ptr->next=NULL;
    if(head==NULL)
        head=ptr;
    else
    {
        ptr->next=head;
        head=ptr;
    }
    return head;

}

int display(node *head)
{
    cout<<"list:"<<endl;
    struct node *ptr,*ptr1;
    if(head==NULL) cout<<" empty"<<endl;
    else
    {
        ptr1=head;
        printf("head = %x\n",head);
        while(ptr1!=NULL)
        {
            cout<<ptr1<<  " "<<ptr1->value<<" "<< ptr1->next<<"-->"<<endl;
            ptr1=ptr1->next;
        }
        cout<<endl;

    }
    return 0;
}
int at_end()
{
    int a;
    struct node *ptr,*ptr1;
    ptr=(struct node*)malloc(sizeof(struct node));
    cin>>a;
    ptr->value=a;
    ptr->next=NULL;
    if(head==NULL)
        head=ptr;
    else
    {
        ptr1=head;
        while(ptr1->next!=NULL) ptr1=ptr1->next;
        ptr1->next=ptr;

    }
    return 0;
}
int main()
{
   struct node *head=0,*head1=0,*head2=0,*ptr,*ptr1;int x;
    while(cin>>x)
    {
        if(x==1)
            head1=at_end();
        else if(x==2) head2=at_end();
        else if (x==3)display(head);

    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *next;

}*head=NULL,*head1=NULL;
int lmerge()
{
    int a;
    struct node *ptr,*ptr1;
    ptr=new(node);
    cin>>a;
    ptr->value=a;
    ptr->next=NULL;
    if(head1==NULL)
        head1=ptr;
    else
    {
        ptr1=head1;
        while(ptr1->next!=NULL) ptr1=ptr1->next;
        ptr1->next=ptr;

    }
    cout<<"insert2"<<endl;
    ////////////////////////////////////////
    struct node *head2,*head3,*ptr2;
    head2=head;
    head3=head1;
    ptr2=head2;
    while(ptr2->next!=NULL)
        ptr2=ptr2->next;
    ptr2->next=head3;
    return 0;

}
int at_last()
{
    int a;
    struct node *ptr,*ptr1;
    ptr=new(node);
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
    cout<<"insert1"<<endl;
    return 0;
}

int ldelete()
{
    struct node *ptr,*ptr1;
    cout<<"which type you want to do??\n1=1st delete\n2=mid delete\n3=last delete"<<endl;
    int a;
    cin>>a;
    if(a==1)
    {
        head=head->next;
    }
    else if(a==2)
    {
        ptr=head;
        int k;
        cin>>k;
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
    cout<<"delete"<<endl;
    return 0;
}
int display()
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
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==1)
            at_last();
        else if(n==2)
            ldelete();
        else if(n==3)
        {
            lmerge();
        }
        else if(n==4)
            display();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *next;
} *head = NULL;
node* create()
{
    node *ptr,*ptr1;
    int a;
    cin>>a;
    ptr=new node();
    ptr->value=a;
    ptr->next=NULL;
    return ptr;
}
void at_first()
{
    node *ptr,*ptr1;
    ptr=create();
    if(head==NULL)
        head=ptr;
    else
    {
        ptr->next=head;
        head=ptr;
    }
}
void at_end()
{
    node *ptr,*ptr1;
    ptr=create();
    if(head==NULL)
        head=ptr;
    else
    {
        ptr1=head;
        while(ptr1->next!=NULL)
            ptr1=ptr1->next;
        ptr1->next=ptr;
    }
}
void before_mid()
{
    node *ptr,*ptr1,*ptr2;
    int x;
    ptr=create();
    cin>>x;
    if(head==NULL)
        head=ptr;
    else
    {
        ptr1=head;
        while(ptr1->next!=NULL and ptr1->value!=x)
            ptr2=ptr1,ptr1=ptr1->next;
        ptr->next=ptr2->next;
        ptr2->next=ptr;
    }

}
void after_mid()
{
    node *ptr,*ptr1,*ptr2;
    int x;
    ptr=create();
    cin>>x;
    if(head==NULL)
        head=ptr;
    else
    {
        ptr1=head;
        while(ptr1->next!=NULL and ptr1->value!=x)
            ptr1=ptr1->next;
        ptr->next=ptr1->next;
        ptr1->next=ptr;
    }
}
void display()
{
    node *ptr;
    ptr=head;
    cout<<"head: "<<ptr<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr<<" "<<ptr->value<<" "<<ptr->next<<endl;
        ptr=ptr->next;
    }
}
int main()
{
    int x,y,z,a,b,c;
    while(cin>>x)
    {
        if(x==1) at_first();
        else if(x==2) at_end();
        else if(x==3) before_mid();
        else if(x==4) after_mid();
        else if(x==5) display();
        else continue;
    }
    return 0;
}

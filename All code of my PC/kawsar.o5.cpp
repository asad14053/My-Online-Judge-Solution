#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *next;
}*head=NULL;
void at_last()
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
    cout<<"at last"<<endl;

}
void at_mid()
{
    int a,b;
    struct node *ptr,*ptr1;
    ptr=new(node);
    cin>>a>>b;
    ptr->value=a;
    ptr->next=NULL;
    ptr1=head;
    while((ptr1->value!=b)||(ptr1->next=NULL))
        ptr1=ptr1->next;
    ptr->next=ptr1->next;
    ptr1->next=ptr;
    cout<<"at mid"<<endl;
}
void at_first()
{
    int a;
    struct node *ptr,*ptr1;
    ptr=new(node);
    cin>>a;
    ptr->value=a;
    if(head==NULL)
        head=ptr;
    else
    {
        ptr->next=head;
        head=ptr;
    }
    cout<<"at first"<<endl;
}
void display()
{
    struct node *ptr;
    if(head==NULL)
        cout<<"empty"<<endl;
    else
    {
        ptr=head;
        cout<<"head:"<<head<<endl;
        while(ptr!=NULL)
        {
            cout<<ptr<<" "<<ptr->value<<" "<<ptr->next<<endl;
            ptr=ptr->next;
        }
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==1)
            at_last();
        else if(n==2)
            at_first();
         else if(n==3)
            at_mid();
         else if(n==4)
            display();
    }
}

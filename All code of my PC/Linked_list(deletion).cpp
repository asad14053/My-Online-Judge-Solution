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
    if(head!=NULL)
        head=head->next;
}
void at_end()
{
    node *ptr,*ptr1,*ptr2;
    if(head!=NULL)
    {
        ptr1=head;
        while(ptr1->next!=NULL)
            ptr2=ptr1,ptr1=ptr1->next;
        ptr2->next=NULL;
    }
}
void mid()
{
    node *ptr,*ptr1,*ptr2;
    int x;
    cin>>x;
    if(head!=NULL)
    {
        ptr1=head;
        while(ptr1->next!=NULL and ptr1->value!=x)
            ptr2=ptr1,ptr1=ptr1->next;
        ptr2->next=ptr1->next;
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
        if(x==0)  // insert at end
        {
            node *ptr,*ptr1;
            int a;
            cin>>a;
            ptr=new node();
            ptr->value=a;
            ptr->next=NULL;
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
        else if(x==1) at_first();
        else if(x==2) at_end();
        else if(x==3) mid();
        else if(x==4) display();
        else continue;
    }
    return 0;
}


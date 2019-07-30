#include<bits/stdc++.h>
using namespace std;
struct node
{
    char value;
    struct node *next;
} *head1 = NULL,*head2=NULL;
int strcmp(node *ptr, node *ptr1)
{
    while(ptr and ptr1 and ptr->value==ptr1->value)
        ptr=ptr->next,ptr1=ptr1->next;
    if(ptr and ptr1)
    return (ptr->value > ptr1->value)?1:-1;
    else if (ptr and !ptr1) return 1;
    else if (!ptr and ptr1) return -1;
    else return 0;
}
node* create(string s, node *head)
{
    node *ptr,*ptr1;
    for(int i=0; i<s.size(); i++)
    {
        if(head==NULL)
            {
                head=new node(), head->value=s[i],head->next=NULL,ptr=head;
                if(head1==NULL)
                    head1=ptr;
                else head2=ptr;
            }
        else
        {
            ptr1=new node();
            ptr1->value=s[i];
            ptr1->next=NULL;
            ptr->next=ptr1;
            ptr=ptr->next;
        }
    }
    return ptr;
}
 void display( node *head)
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
int main()   //Write a function compare() that works similar to strcmp(), i.e., it returns 0 if both strings are same, 1 if first linked list is lexicographically greater, and -1 if second string is lexicographically greater.
{
    string s,s1;
    while(cin>>s>>s1)
    {
        node *ptr,*ptr1;
        ptr=create(s, head1);
        ptr1=create(s1,head2);
        display(head1);
        display(head2);
        cout<<"strcmp: "<<strcmp(ptr,ptr1)<<endl;

    }
    return 0;
}


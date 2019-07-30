#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    node *next;
} *head=NULL;
int at_last(int a)
{
    struct node *ptr,*ptr1;
    ptr = new(struct node);
    ptr->value = a;
    if (head == NULL)
    {
        head = ptr;
    }
        ptr1= head;
        while(ptr1->next!=head)
       ptr1= ptr1->next;
        ptr1->next = ptr;
        head = ptr;
    return 0;
}
int display_list()
{
    struct node *ptr;
    if (head == NULL)
    {
        cout<<"List is empty, nothing to display"<<endl;
    }
    ptr = head;
    cout<<"Circular Link List: "<<endl;
    cout<<"head :"<<head<<endl;
    while (ptr->next!= head)
    {
        cout<<ptr<<" "<<ptr->value<<" "<<ptr->next<<endl;
        ptr = ptr->next;
    }
    cout<<ptr<<" "<<ptr->value<<" "<<ptr->next<<endl;
}
int add_begin(int a)
{
    struct node *ptr;
    ptr = new(struct node);
    if (head == NULL)
    {
        head=ptr;
    }

    ptr->value = a;
    ptr->next = head->next;
    head->next = ptr;
    return 0;
}
int add_after(int a, int pos)
{
    struct node *ptr, *ptr1;
    cout<<head<<"===="<<endl;
    if (head == NULL)
    {
        cout<<"First Create the list."<<endl;
        return 0;
    }


    ptr1 = head;

    while(ptr1->value!=pos||ptr1->next!=head)
    {
        cout<<head<<"===="<<endl;
        ptr1 = ptr1->next;
    }
    ptr = new(struct node);
    cout<<head<<"===="<<endl;
    ptr->next = ptr1->next;
    ptr->value = a;
    ptr1->next = ptr;
    return 0;
}
int main()
{
    int choice,element,position,position_val;
    cout<<endl<<"---------------------------"<<endl;
    cout<<endl<<"Circular singly linked list"<<endl;
    cout<<endl<<"---------------------------"<<endl;
    cout<<"1.Add last"<<endl;
    cout<<"2.Add at beginning"<<endl;
    cout<<"3.Add after"<<endl;
    cout<<"4.Delete"<<endl;
    cout<<"5.Search"<<endl;
    cout<<"6.Display"<<endl;
    cout<<"7.Update"<<endl;
    cout<<"8.Sort"<<endl;
    cout<<"9.Quit"<<endl;
    while (1)
    {

        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the element: ";
            cin>>element;
            at_last(element);
            cout<<endl;
            break;
        case 2:
            cout<<"Enter the element: ";
            cin>>element;
            add_begin(element);
            cout<<endl;
            break;
        case 3:
            cout<<"Enter the element: ";
            cin>>element;
            cout<<"Insert position : ";
            cin>>position;
            add_after(element, position);
            cout<<endl;
            break;
        case 4:
            if (head == NULL)
            {
                cout<<"List is empty, nothing to delete"<<endl;
                break;
            }
            cout<<"Enter the element for deletion: ";
            cin>>element;
            //  delete_element(element);
            cout<<endl;
            break;
        case 5:
            if (head == NULL)
            {
                cout<<"List Empty!! Can't search"<<endl;
                break;
            }
            cout<<"Enter the element to be searched: ";
            cin>>element;
            //  search_element(element);
            cout<<endl;
            break;
        case 6:
            display_list();
            break;
        case 7:
            //update();
            break;
        case 8:
            //sort();
            break;
        case 9:
            //  exit(1);
            break;
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
    return 0;
}


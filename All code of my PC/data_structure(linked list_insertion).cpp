#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *next;

}*head=NULL;
struct node *head1=0,*head2=0,*ptr,*ptr1;int x;
int remove()
{
    struct node *ptr,*ptr1;
    cout<<"which type you want to do??\n1=1st delete\n2=mid delete\n3=last delete"<<endl;
    int a;cin>>a;
    if(a==1){ head=head->next;}
    else if(a==2)
    {
        ptr=head;
        int k;
        cin>>k;
        while(ptr->value!=k) { ptr1=ptr; ptr=ptr->next; }        ptr1->next=ptr->next;

    }
    else if(a==3)
    {
        struct node *ptr,*ptr1;
        ptr=head;
        while(ptr->next!=NULL){ ptr1=ptr; ptr=ptr->next;}
        ptr1->next=NULL;
    }
return 0;
}
int search()
{
    int n=0,a,k=0,p=0;
    struct node *ptr,*ptr1;
    ptr1=head;
    cout<<"search value:"<<endl;
    cin>>a;
    while(ptr1->next!=NULL&&k!=1)
    {
        if(ptr1->value==a)
        {
            k=1;
            p++;

        }
        else k=0;
        ptr1=ptr1->next;

    }
    if(k=1)  cout<<"value found !! pos:"<<k<<endl;
    else cout<<"not found !"<<endl;
return 0;
}
int split()
{
    int a;
    struct node *ptr,*ptr1,*head1,*head2,*head3,*head4;
    cin>>a;
    head1=head;
    ptr1=head1;
    //head2=NULL;
    while(ptr1->value!=a) ptr1=ptr1->next;
    head2=ptr1->next;
    ptr1->next=NULL;
    cout<<"list1:"<<endl;
    printf("Head 1 = %x\n",head1);
    head=head1;
    if(head==NULL) cout<<" empty"<<endl;
    else
    {
        ptr1=head;
        while(ptr1!=NULL)
        {
            cout<<ptr1->value<<"-->";
            ptr1=ptr1->next;
        }
        cout<<endl;

    }
    cout<<"list2:"<<endl;
    printf("HEAD 2 =%x\n",head2);
    if(head2==NULL) cout<<" empty"<<endl;
    else
    {
        ptr1=head2;
        while(ptr1!=NULL)
        {
            cout<<ptr1->value<<"-->";
            ptr1=ptr1->next;
        }
        cout<<endl;
    }
    return 0;

}
int mege()
{
   //int a,b;
    struct node *ptr3,*head2,*head,*head1;
   // ptr=(struct node*)malloc(sizeof(struct node));
    head=head1;
    ptr3=head;
    printf("Head1 = %x head2= %x\n",head,head2);
    while(ptr3->next!=NULL) ptr3=ptr3->next;
    ptr3->next=head2;

}
int replace()
{
    int a,b;
    struct node *ptr,*ptr1,*ptr3;
    ptr=(struct node*)malloc(sizeof(struct node));
    cout<<"input & search value:"<<endl;
    cin>>a>>b;
    ptr->value=a;
    ptr->next=NULL;
    if(head==NULL)
        head=ptr;
    else
    {
        ptr1=head;
        while(ptr1->value!=b)
        {
            ptr3=ptr1;
            ptr1=ptr1->next;
        }

        if(ptr1!=NULL)
        {ptr->next=ptr1->next;
            ptr3->next=ptr ;


        }
    }
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
        printf("dhead = %x\n",head);
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
int before_mid()
{
    int a,b;
    cout<<"enter value & position value"<<endl;
    cin>>a>>b;
      struct node *ptr,*ptr1,*ptr2,*ptr3;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->value=a;
    ptr->next=NULL;
    ptr1=head;
                 while(ptr1->value!=b)
        {
            ptr2=ptr1;
            ptr1=ptr1->next;
        }
        ptr3=ptr1;
        cout<<ptr1->value<<" "<<ptr2->next<<" "<<ptr1->next<<endl;
         ptr->next=ptr1->next;
        ptr2->next=ptr;
        ptr->next=ptr3;
     return 0;
}

int after_mid()
{
    int a,b;
    struct node *ptr,*ptr1;
    ptr=(struct node*)malloc(sizeof(struct node));
    cout<<"input & search value:"<<endl;
    cin>>a>>b;
    ptr->value=a;
    ptr->next=NULL;
    ptr1=head;
    while(ptr1->value!=b)
    {
        ptr1=ptr1->next;
    }

    if(ptr1!=NULL)
    {
        ptr->next;ptr1=head;
    while(ptr1->value!=b)
    {
        ptr1=ptr1->next;
    }

    if(ptr1!=NULL)
    {
        ptr->next=ptr1->next;
        ptr1->next=ptr;

    }ptr1->next;
        ptr1->next=ptr;

    }

return 0;
}
int at_first()
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
        ptr->next=head;
        head=ptr;
    }
    return 0;

}
int main()
{   struct node *head,*head1,*head2,*ptr,*ptr1;int x;head=NULL;
    cout<<"       -------------------------my project--------------------------"<<endl<<endl;
    while(1)
    {


        cout<<"\n1=end ,2=mid after ,3=before mid ,4=first ,5=search \n6=split ,7=merge 8=remove ,9=replace ,10=display ,else break;\nenter choice :"<<endl;
        cin>>x;

        if(x==1) at_end();
        else if(x==2) after_mid();
        else if(x==3) before_mid();
        else if(x==4) at_first();
        else if(x==5) search();
        else if(x==6) split();
        else if(x==7)
        {

   //int a,b;
    struct node *ptr3;//*head2,*head,*head1;
   // ptr=(struct node*)malloc(sizeof(struct node));
    head=head1;
    ptr3=head;
    printf("Head1 = %x head2= %x\n",head,head2);
    while(ptr3->next!=NULL) ptr3=ptr3->next;
    ptr3->next=head2;
        }
        else if(x==8) remove();
        else if(x==9) replace();
        else if(x==10)
        {
            display();/*
            cout<<"list:"<<endl;
    //struct node *ptr,*ptr1;
    if(head==NULL) cout<<" empty"<<endl;
    else
    {
        ptr1=head;
        printf("dhead = %x\n",head);
        while(ptr1!=NULL)
        {
            cout<<ptr1<<  " "<<ptr1->value<<" "<< ptr1->next<<"-->"<<endl;
            ptr1=ptr1->next;
        }
        cout<<endl;
        }*/
        }
        else break;
    }
    return 0;
}
